#pragma once

class SandWorldHomeLift
{
public:
    SandWorldHomeLift(char const*);
    init(al::ActorInitInfo const&);
    start();
    stop();
    appearAndSetStart();
    initAfterPlacement();
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    control();
    getStopActionName() const;
    exeStandBy();
    exeDelay();
    exeWait();
    exeMoveSign();
    exeMove();
    exeStopSign();
    exeStop();
    exeReset();
    exeWaitAppearCameraInterpole();
    exeAppearByMainShine();
    startDemoAppearByMainShine();
    startAppearByMainShine();
    isEndDemoAppearCameraInterpole() const;
    isEndDemoAppearByMainShine() const;
};
