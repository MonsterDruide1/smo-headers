#pragma once

class TsukkunTraceHolder
{
public:
    TsukkunTraceHolder();
    initAfterPlacementSceneObj(al::ActorInitInfo const&);
    appearTrace(sead::Vector3<float> const&, sead::Vector3<float> const&, al::HitInfo const*, al::HitSensor*);
    getSceneObjName() const;
    ~TsukkunTraceHolder();
};
