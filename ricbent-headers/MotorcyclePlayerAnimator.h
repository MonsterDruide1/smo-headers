#pragma once

class MotorcyclePlayerAnimator
{
public:
    MotorcyclePlayerAnimator();
    update(float, float, float);
    startBind(IUsePlayerPuppet*);
    startBindKeepDemo();
    endBind();
    startBindRideStartL();
    startBindRideStartR();
    startBindRideOn();
    startBindWait();
    startBindRideRunStart();
    startBindRideClash();
    startBindRideJump();
    tryStartBindRideRunIfNotPlaying();
    tryStartBindRideLandIfJump();
    exeNone();
    exeRideStartL();
    exeRideStartR();
    exeRideOn();
    exeWait();
    exeRideRunStart();
    exeRideRun();
    exeRideClash();
    exeRideJump();
    exeRideLand();
    exeBindKeepDemo();
    ~MotorcyclePlayerAnimator();
};
