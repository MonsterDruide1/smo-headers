#pragma once

namespace al { 

class SimpleCircleShadowXZ
{
public:
    SimpleCircleShadowXZ(char const*);
    initSimpleCircleShadow(al::LiveActor*, al::ActorInitInfo const&, char const*, char const*);
    makeActorAlive();
    updatePose();
    control();
    syncHostVisible();
    setOffsetWithInterpole(sead::Vector3<float> const&);
    setScaleWithInterpole(sead::Vector3<float> const&);
    setRotateWithInterpole(sead::Vector3<float> const&);
    setInterpoleFrame(int);
};

} 
