#pragma once

class GolemStampState
{
public:
    GolemStampState(char const*, IUseGolemState*, char const*, char const*, GolemStampStateParamCommon*, GolemStampStateParamLevel*);
    appear();
    kill();
    control();
    exeWait();
    exeLift();
    exeAim();
    exeStamp();
    exeFollow();
    exeAttackBomb();
    exeAttackSpinSign();
    exeAttackSpin();
    ~GolemStampState();
};
