#pragma once

class ShibakenStateWaitFar
{
public:
    ShibakenStateWaitFar(char const*, Shibaken*);
    tryStart();
    appear();
    exeTurn();
    exeSit();
    ~ShibakenStateWaitFar();
};
