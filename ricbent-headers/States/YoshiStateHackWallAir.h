#pragma once

class YoshiStateHackWallAir
{
public:
    YoshiStateHackWallAir(al::LiveActor*, IUsePlayerHack**, PlayerConst const*, IUsePlayerCollision const*, PlayerTrigger const*, YoshiTongue const*, PlayerWallActionHistory*, PlayerAnimator*);
    appear();
    isCling() const;
    isAir() const;
    setupCling(al::CollisionParts const*, sead::Vector3<float> const&, sead::Vector3<float> const&);
    startShrink();
    exeCling();
    exeJump();
    ~YoshiStateHackWallAir();
};
