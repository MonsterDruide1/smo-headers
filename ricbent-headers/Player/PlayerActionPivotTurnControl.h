#pragma once

class PlayerActionPivotTurnControl
{
public:
    PlayerActionPivotTurnControl(al::LiveActor*, PlayerConst const*, PlayerInput const*, IUsePlayerCollision const*, float);
    reset();
    update();
    calcMoveDirection(sead::Vector3<float>*, sead::Vector3<float> const&);
};
