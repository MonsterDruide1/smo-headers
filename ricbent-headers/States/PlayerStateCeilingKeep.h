#pragma once

class PlayerStateCeilingKeep
{
public:
    PlayerStateCeilingKeep(al::LiveActor*);
    appear();
    exeKeep();
    exeLeave();
    ~PlayerStateCeilingKeep();
};
