#pragma once

class PlayerWhip
{
public:
    PlayerWhip(char const*, al::LiveActor*, sead::Matrix34<float> const*);
    init(al::ActorInitInfo const&);
    makeActorAlive();
    updatePose();
    control();
    attackSensor(al::HitSensor*, al::HitSensor*);
};
