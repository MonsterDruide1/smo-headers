#pragma once

class PlayerModelChangerYoshi
{
public:
    PlayerModelChangerYoshi(al::LiveActor const*, PlayerModelHolder*);
    syncHost();
    syncModelFlag(al::LiveActor*);
    appearModel();
    killModel();
    resetPosition();
    hideModel();
    hideSilhouette();
    showModel();
    showSilhouette();
    isHiddenModel() const;
    changeModel(al::LiveActor*);
    isFireFlower() const;
    isMini() const;
    isChange() const;
    is2DModel() const;
    isHiddenShadowMask() const;
    hideShadowMask();
    showShadowMask();
};
