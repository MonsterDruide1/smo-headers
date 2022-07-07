#pragma once

class YoshiStateHackWallCling
{
public:
    YoshiStateHackWallCling(al::LiveActor*, IUsePlayerHack**, PlayerConst const*, IUsePlayerCollision const*, PlayerAnimator*);
    appear();
    setup(al::CollisionParts const*, sead::Vector3<float> const&, sead::Vector3<float> const&);
    exeCling();
    ~YoshiStateHackWallCling();
};
