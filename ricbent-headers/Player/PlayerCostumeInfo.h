#pragma once

class PlayerCostumeInfo
{
public:
    PlayerCostumeInfo();
    init(PlayerBodyCostumeInfo const*, PlayerHeadCostumeInfo const*);
    isEnableBigEar() const;
    isEnableHairNoCap() const;
    isEnableCostume2D() const;
    isNeedShrinkNose() const;
    isNeedBodyHair() const;
    isNeedSyncBodyHair() const;
    isNeedFullFaceAnim() const;
    isHidePainNose() const;
    isEnableEarring() const;
    isSyncFaceBeard() const;
    isSyncStrap() const;
    isFollowJoeStrap() const;
    isPreventHeadPain() const;
    isInvisibleHead() const;
    calcWarmLevel(int) const;
};
