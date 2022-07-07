#pragma once

class CageShineWatcher
{
public:
    CageShineWatcher(char const*);
    init(al::ActorInitInfo const&);
    initBySwitch();
    initAfterPlacement();
    syncShineGetCamera();
    startBreakDemo();
    isSameShine(Shine const*) const;
    exeShineWatch();
    exeWaitCameraStart();
    exeCameraInterpole();
    exeBreak();
    endBreakDemo();
    exeWaitEntranceCameraStart();
    exeLinkSwitchWatch();
    isSwitchOn() const;
};
