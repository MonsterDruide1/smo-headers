#pragma once

class PlayerModelChangerHakoniwa
{
public:
    PlayerModelChangerHakoniwa(al::LiveActor const*, PlayerModelHolder*, PlayerPainPartsKeeper*, PlayerCostumeInfo*, IUseDimension const*);
    initStartModel();
    getModelName();
    changeModel(al::LiveActor*);
    update(bool, bool);
    syncHost(bool);
    syncShowHide(al::LiveActor*);
    startDamageStopDemo();
    updateDamageStopDemo();
    syncHostDamageStopDemo(bool);
    calcCostumeWarmLevel(int) const;
    resetPosition();
    hideModel();
    hideSilhouette();
    hideShadowMask();
    showModel();
    showSilhouette();
    showShadowMask();
    syncModelBoneVisibility();
    isFireFlower() const;
    isMini() const;
    isChange() const;
    is2DModel() const;
    isHiddenModel() const;
    isHiddenShadowMask() const;
};
