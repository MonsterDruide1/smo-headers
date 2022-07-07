#pragma once

class KoopaJumpMovement
{
public:
    KoopaJumpMovement();
    start(al::LiveActor const*, sead::Vector3<float> const&, sead::Quat<float> const&, sead::Vector3<float> const&);
    move(al::LiveActor*, bool);
    turnEndPoseFaceToPlayer(al::LiveActor const*);
};
