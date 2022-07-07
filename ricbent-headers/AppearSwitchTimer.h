#pragma once

class AppearSwitchTimer
{
public:
    AppearSwitchTimer();
    init(al::ActorInitInfo const&, al::IUseAudioKeeper const*, al::IUseStageSwitch*, al::IUseCamera*, al::LiveActor*);
    onSwitch();
    isSwitchOn();
    offSwitch();
    isDemoPlaying();
    exeWaitAppearDemoStart();
    exeWaitAppearDemoCameraInterpoling();
    exeAppearDemo();
    procAppearDitherAnim(int);
    exeOnWait();
    getLastFrame();
    exeOnWaitBlink();
    exeOffWait();
    ~AppearSwitchTimer();
};
