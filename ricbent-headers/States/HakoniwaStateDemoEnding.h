#pragma once

class HakoniwaStateDemoEnding
{
public:
    HakoniwaStateDemoEnding(HakoniwaSequence*, al::WipeHolder*, al::ScreenCaptureExecutor*, HakoniwaStateDeleteScene*, WorldResourceLoader*, GameDataHolder*);
    ~HakoniwaStateDemoEnding();
    init();
    appear();
    kill();
    exeLoadWorldResource();
    exeLoadWorldResourceSecond();
    exeLoad();
    exeDemoEnding();
    exeEndEnding();
    exeLoadStaffRoll();
    exeDemoStaffRoll();
    exeEnd();
};
