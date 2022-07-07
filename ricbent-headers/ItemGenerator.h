#pragma once

class ItemGenerator
{
public:
    ItemGenerator();
    ItemGenerator(al::LiveActor*, al::ActorInitInfo const&);
    initLinkShine(al::LiveActor*, al::ActorInitInfo const&, bool);
    initNoLinkShine(al::LiveActor*, al::ActorInitInfo const&, bool);
    initHintPhotoShine(al::LiveActor*, al::ActorInitInfo const&);
    createShineEffectInsideObject(al::ActorInitInfo const&);
    tryUpdateHintTransIfExistShine();
    tryUpdateHintTransIfExistShine(sead::Vector3<float> const&);
    isEnableGenerateByCount(int) const;
    generate(sead::Vector3<float> const&, sead::Quat<float> const&);
    generate(sead::Vector3<float> const&, sead::Vector3<float> const&);
    tryGenerate(sead::Vector3<float> const&, sead::Quat<float> const&, int);
    tryGenerate(sead::Vector3<float> const&, sead::Vector3<float> const&, int);
    isNone() const;
    isShine() const;
    isLifeUp() const;
    isLifeMaxUp() const;
    isCoin() const;
    isCoinBlow() const;
    isCoinStackBound() const;
    isKuriboMini3() const;
    isKuriboMini8() const;
};
