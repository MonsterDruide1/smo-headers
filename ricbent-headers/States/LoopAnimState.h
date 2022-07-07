#pragma once

class LoopAnimState
{
public:
    LoopAnimState(al::LiveActor*, char const*, bool);
    appear();
    end();
    exeStart();
    startAction(char const*);
    exeLoop();
    exeEnd();
    ~LoopAnimState();
};
