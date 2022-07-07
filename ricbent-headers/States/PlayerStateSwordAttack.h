#pragma once

class PlayerStateSwordAttack
{
public:
    PlayerStateSwordAttack(al::LiveActor*, al::LiveActor*);
    appear();
    kill();
    exeAttack();
    ~PlayerStateSwordAttack();
};
