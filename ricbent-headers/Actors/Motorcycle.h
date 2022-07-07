#pragma once

class Motorcycle
{
public:
    Motorcycle(char const*);
    init(al::ActorInitInfo const&);
    initAfterPlacement();
    attackSensor(al::HitSensor*, al::HitSensor*);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    movement();
    kill();
    updateCollider();
    calcAnim();
    exeWait();
    exeCreep();
    exeFall();
    exeJump();
    endJump();
    exeReaction();
    exeReset();
    exeRideStart();
    exeRideStartOn();
    exeRideWait();
    exeRideWaitJump();
    endRideWaitJump();
    exeRideWaitLand();
    exeRideRunStart();
    exeRideRun();
    exeRideRunCollide();
    exeRideRunFall();
    exeRideRunWheelie();
    endRideRunWheelie();
    exeRideRunLand();
    exeRideRunJump();
    endRideRunJump();
    exeRideRunBoundStart();
    exeRideRunBound();
    exeRideRunClash();
    exeRideParkingSnap();
    exeRideParkingStart();
    exeRideParking();
    exeRideParkingAfter();
    getPlayerCollider() const;
};
