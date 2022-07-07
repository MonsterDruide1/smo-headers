#pragma once

class MoonBasementRock
{
public:
    MoonBasementRock(char const*);
    init(al::ActorInitInfo const&);
    initAfterPlacement();
    kill();
    updateCollider();
    isFalling() const;
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    exeWait();
    exeBreak();
    exeFall();
    exeLand();
};
