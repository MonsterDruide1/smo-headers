#pragma once

namespace CapManHeroDemoFunction {

capManHeroControl(al::LiveActor*);
createDemoCapManHero(char const*, al::ActorInitInfo const&, char const*);
startCapManHeroCommonSettingAfterShowModel(al::LiveActor*);
setDemoStartInfo(al::IUseSceneObjHolder const*, sead::Quat<float> const&);
getDemoStartInfo(al::IUseSceneObjHolder const*, sead::Quat<float>*);

} 
