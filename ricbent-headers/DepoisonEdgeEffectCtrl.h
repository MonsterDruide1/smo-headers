#pragma once

class DepoisonEdgeEffectCtrl
{
public:
    DepoisonEdgeEffectCtrl(al::LiveActor*, char const*, char const*);
    init(al::ActorInitInfo const&, float);
    attackSensorToPaintObj(float, sead::Color4u8 const&, al::HitSensor*, al::HitSensor*);
    update();
};
