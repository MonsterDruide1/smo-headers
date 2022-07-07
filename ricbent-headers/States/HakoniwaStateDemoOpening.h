#pragma once

class HakoniwaStateDemoOpening
{
public:
    HakoniwaStateDemoOpening(HakoniwaSequence*, al::WipeHolder*, al::ScreenCaptureExecutor*, WorldResourceLoader*, BootLayout*, al::LayoutInitInfo const&, HakoniwaStateDeleteScene*, al::AsyncFunctorThread*, LoadLayoutCtrl*);
    ~HakoniwaStateDemoOpening();
    init();
    appear();
    startSecond();
    exeBoot();
    exeLoadFirstSequence();
    exeFirstSequence();
    exeDestroyFirstSequence();
    exeLoad();
    exeFadeToText();
    exeTextAppear();
    exeText();
    exeFadeToDemo();
    exeDemoOpening();
    exeEnd();
};
