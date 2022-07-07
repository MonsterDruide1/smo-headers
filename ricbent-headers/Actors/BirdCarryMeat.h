#pragma once

class BirdCarryMeat
{
public:
    BirdCarryMeat(char const*);
    init(al::ActorInitInfo const&);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    control();
    getBindMtx() const;
    skipDemo();
    exeWaitOnRail();
    exeDemoCarryMeat();
    exeMoveMeat();
    exeReactionCarry();
    exeDrop();
    exeFlyAway();
    isDropNerve() const;
    getRailRider() const;
};
