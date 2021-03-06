# smo-headers
This is a collection of all (or most) public header files for the game Super Mario Odyssey. These were collected in a community effort to help with modding the game.

## How to use
This repository can simply be included in your project using for example `git submodule`. I suggest placing this in a separate directory next to the custom header files, for example using `include/...` for custom files and `lib/...` as the location for this repo.

To add the repository as a submodule named `lib` to the current folder, run this command:
```git
git submodule add https://github.com/MonsterDruide1/smo-headers lib
```

Make sure to add `lib` and `lib/sead` to your includes, either by using the `-Ilib -Ilib/sead` compiler flags or by adding it to a makefile.

An example project using this repository as base for headers is the [practice mod](https://github.com/MonsterDruide1/smo-practice).

## Versions
As multiple different versions of the headers got created and evolved differently, this repository tries to get them back together in a single, accessible location. However, at the moment not all of the headers are properly polished up and merged to a single location, so different bases can be selected to use in the project.

Name | Path | Working | Cleaned libraries | Merged
-----|------|---------|-------------------|--------
[OdysseyDecomp](https://github.com/MonsterDruide1/OdysseyDecomp)                |/|:white_check_mark:|:white_check_mark:|:white_check_mark:
[SuperMarioOdysseyOnline](https://github.com/CraftyBoss/SuperMarioOdysseyOnline)|online-headers|:white_check_mark:|:x:|:x:
[SMO-Challenges-Base](https://github.com/CraftyBoss/SMO-Challenges-Base)        |challenges-base|:white_check_mark:|:x:|:x:
[OdysseyReversed](https://github.com/shibbo/OdysseyReversed)                    |odyssey-reversed|:x:|:x:|:x:
[smo-practice](https://github.com/fruityloops1/smo-practice)                    |practice-headers|:white_check_mark:|:x:|:x:
[SMO-PrimitiveRenderer](https://github.com/Mars2032/SMO-PrimitiveRenderer)      |primitive-renderer|:x:|:x:|:x:
[OdysseyHeaders](https://github.com/GRAnimated/OdysseyHeaders)                  |granimated-headers|:x:|:x:|:x:
[Visible-HitSensors](https://github.com/Mars2032/Visible-HitSensors)            |visible-hitsensors|:x:|:x:|:x:
[Starlight-SMO-Example](https://github.com/brycewithfiveunderscores/Starlight-SMO-Example)|starlight-example|:x:|:x:|:x:
[Starlight-SMO-LayoutEditing](https://github.com/CraftyBoss/Starlight-SMO-LayoutEditing)|starlight-layout|:x:|:x:|:x:
[SMO-Galaxy-Gravity](https://github.com/CraftyBoss/SMO-Galaxy-Gravity)          |galaxy-gravity|:x:|:x:|:x:
[OdysseyHeaders](https://github.com/RicBent/OdysseyHeaders)                     |ricbent-headers|:x:|:x:|:x:
[Superstar](https://github.com/GRAnimated/Superstar)                            |granimated-superstar|:x:|:x:|:x:

To use a specific version of the headers, adjust your includes accordingly: For example, to use the headers of `SuperMarioOdysseyOnline`, pick `lib/online-headers` and `lib/online-headers/sead` as your includes instead.

## Credits
Credits goes to all the various projects and users that collected and published headers:
- [OdysseyDecomp](https://github.com/MonsterDruide1/OdysseyDecomp)
- [SuperMarioOdysseyOnline](https://github.com/CraftyBoss/SuperMarioOdysseyOnline)
- [SMO-Challenges-Base](https://github.com/CraftyBoss/SMO-Challenges-Base)
- [OdysseyReversed](https://github.com/shibbo/OdysseyReversed)
- [smo-practice](https://github.com/fruityloops1/smo-practice)
- [SMO-PrimitiveRenderer](https://github.com/Mars2032/SMO-PrimitiveRenderer)
- [OdysseyHeaders](https://github.com/GRAnimated/OdysseyHeaders)
- [Visible-HitSensors](https://github.com/Mars2032/Visible-HitSensors)
- [Starlight-SMO-Example](https://github.com/brycewithfiveunderscores/Starlight-SMO-Example)
- [Starlight-SMO-LayoutEditing](https://github.com/CraftyBoss/Starlight-SMO-LayoutEditing)
- [SMO-Galaxy-Gravity](https://github.com/CraftyBoss/SMO-Galaxy-Gravity)
- [OdysseyHeaders](https://github.com/RicBent/OdysseyHeaders)
- [Superstar](https://github.com/GRAnimated/Superstar)
