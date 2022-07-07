#pragma once

class PlayerPowerGlove
{
public:
    PlayerPowerGlove();
    initPartsMtx(al::LiveActor*, al::ActorInitInfo const&, sead::Matrix34<float> const*);
    makeActorAlive();
    updatePose();
    control();
    attackSensor(al::HitSensor*, al::HitSensor*);
    init(al::ActorInitInfo const&);
};
