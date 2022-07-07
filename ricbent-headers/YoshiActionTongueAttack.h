#pragma once

class YoshiActionTongueAttack
{
public:
    YoshiActionTongueAttack(al::LiveActor const*, IUsePlayerHack**, PlayerAnimator*, YoshiTongue*);
    tryStartAttack(sead::Vector3<float> const&);
    initStartTongue(bool);
    startTongueAnimStart();
    tryStartAttackGround(sead::Vector3<float> const&);
    tryStartAttackFromWall(sead::Vector3<float> const&, sead::Vector3<float> const&);
    tryStartAttackFromWallAir(sead::Vector3<float> const&, sead::Vector3<float> const&);
    tryStartEatFinish();
    startTongueAnimEnd();
    tryEatDirect();
    startShrink();
    endShrink();
    adjustTongueShrinkRestRange(float);
    update();
    startTongueAnimLoop();
    endTongueAnim();
    syncEatVis();
};
