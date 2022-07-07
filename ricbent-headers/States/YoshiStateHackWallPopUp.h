#pragma once

class YoshiStateHackWallPopUp
{
public:
    YoshiStateHackWallPopUp(al::LiveActor*, IUsePlayerHack**, PlayerConst const*, IUsePlayerCollision const*, PlayerAnimator*);
    appear();
    kill();
    setupSnap(al::CollisionParts const*, sead::Vector3<float> const&, sead::Vector3<float> const&, sead::Vector3<float> const&);
    exePopUp();
    ~YoshiStateHackWallPopUp();
};
