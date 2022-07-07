#pragma once

class JugemFishingFloatOffsetCtrl
{
public:
    JugemFishingFloatOffsetCtrl(al::LiveActor*, char const*);
    calcJointCallback(int, sead::Matrix34<float>*);
    endHack();
    startFishing();
    endFishing();
    exeWait();
    exeFishingStart();
    exeFishingWait();
    exeFishingEnd();
    getMaterialCode() const;
    isHitTopWater() const;
    isHitTopCollision() const;
    getCtrlTypeName() const;
    getNerveKeeper() const;
};
