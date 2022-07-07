#pragma once

class HakoniwaStateDemoWorldWarp
{
public:
    HakoniwaStateDemoWorldWarp(HakoniwaSequence*, al::WipeHolder*, al::ScreenCaptureExecutor*, WorldResourceLoader*, HakoniwaStateDeleteScene*, LoadLayoutCtrl*);
    ~HakoniwaStateDemoWorldWarp();
    init();
    kill();
    appear();
    setNoDemo();
    isNeedWaitLoadStage() const;
    resetNeedWaitLoadStage();
    exeLoad();
    exeDemoWorldWarp();
    exeDemoWorldWarpHoleLoop();
    exeDemoWorldWarpHoleEnd();
    exeEnd();
};
