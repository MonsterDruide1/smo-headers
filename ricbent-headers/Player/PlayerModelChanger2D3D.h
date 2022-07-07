#pragma once

class PlayerModelChanger2D3D
{
public:
    PlayerModelChanger2D3D(al::LiveActor const*, PlayerInput const*, PlayerModelHolder*, ActorDimensionKeeper const*);
    update(bool);
    getModelName();
    changeModel(al::LiveActor*);
    updateDead();
    requestDamage();
    requestKinokoSuper();
    requestFireFlower();
    requestMini();
    requestDeath();
    syncPose(al::LiveActor const*);
    isFireFlower() const;
    isMini() const;
    isChange() const;
    is2DModel() const;
    isHiddenModel() const;
    isHiddenShadowMask() const;
    resetPosition();
    hideModel();
    hideSilhouette();
    hideShadowMask();
    showModel();
    showSilhouette();
    showShadowMask();
};
