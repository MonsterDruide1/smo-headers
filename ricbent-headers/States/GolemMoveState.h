#pragma once

class GolemMoveState
{
public:
    GolemMoveState(char const*, IUseGolemState*);
    appear();
    kill();
    control();
    exeWait();
    exeWalk();
    ~GolemMoveState();
};
