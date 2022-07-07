#pragma once

class EchoEmitterHolder
{
public:
    EchoEmitterHolder();
    initAfterPlacementSceneObj(al::ActorInitInfo const&);
    execute();
    emit(sead::Vector3<float> const&, float, int);
    emitKeep(void const*, sead::Vector3<float> const&, float, int);
    setToUbo(agl::DrawContext*, int, sead::Matrix34<float> const&, sead::Matrix44<float> const&) const;
    tryGetUnUseEmitter() const;
    tryGetUnUseEmitterKeeper(void const*) const;
    getSceneObjName() const;
    ~EchoEmitterHolder();
};
