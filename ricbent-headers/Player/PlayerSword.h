#pragma once

class PlayerSword
{
public:
    PlayerSword(char const*);
    initPartsMtx(al::LiveActor*, al::ActorInitInfo const&, sead::Matrix34<float> const*, char const*);
    makeActorAlive();
    updatePose();
    control();
    attackSensor(al::HitSensor*, al::HitSensor*);
};
