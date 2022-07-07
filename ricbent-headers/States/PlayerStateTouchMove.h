#pragma once

class PlayerStateTouchMove
{
public:
    PlayerStateTouchMove(al::LiveActor*, TouchTargetKeeper const*);
    appear();
    exeJump();
    ~PlayerStateTouchMove();
};
