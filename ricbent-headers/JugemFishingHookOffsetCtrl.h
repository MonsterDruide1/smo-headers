#pragma once

class JugemFishingHookOffsetCtrl
{
public:
    JugemFishingHookOffsetCtrl(al::LiveActor*, char const*, char const*, JugemFishingSurfaceCheckInfo const*);
    calcJointCallback(int, sead::Matrix34<float>*);
    endHack();
    startFishing(int, int);
    endFishing(int);
    exeWait();
    exeFishingStartDelay();
    exeFishingStart();
    exeFishingWait();
    exeFishingEnd();
    getCtrlTypeName() const;
    getNerveKeeper() const;
};
