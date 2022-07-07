#pragma once

class GolemStandBreakState
{
public:
    GolemStandBreakState(char const*, IUseGolemState*, GolemShoutState*);
    appear();
    kill();
    exeDamage();
    exeShout();
    exeRecover();
    startBreak(GolemClimbWeakPoint*);
    ~GolemStandBreakState();
};
