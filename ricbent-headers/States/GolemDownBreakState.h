#pragma once

class GolemDownBreakState
{
public:
    GolemDownBreakState(char const*, IUseGolemState*, GolemShoutState*);
    appear();
    kill();
    exeDamage();
    exeShout();
    exeRecover();
    startBreak(GolemClimbWeakPoint*, char const*, char const*);
    ~GolemDownBreakState();
};
