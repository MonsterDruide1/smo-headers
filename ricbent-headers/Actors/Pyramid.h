#pragma once

class Pyramid
{
public:
    Pyramid(char const*);
    init(al::ActorInitInfo const&);
    initAfterPlacement();
    attackSensor(al::HitSensor*, al::HitSensor*);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    resetAtCloseAndGround();
    resetFlyKeyPose(float);
    resetAtOpenAndGround();
    resetAtCloseAndFly();
    resetAtOpenAndFly();
    tryStartOpenDemo();
    tryStartRiseDemo();
    tryStartRiseDemo(bool);
    isDemoPlaying();
    exeWait();
    exeMove();
    exeStopBefore();
    exeStop();
    exeDemoDoorOpen();
};
