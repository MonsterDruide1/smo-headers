#pragma once

class NpcStateTurnBase
{
public:
    NpcStateTurnBase(char const*, al::LiveActor*);
    startActionLocal(char const*);
    ~NpcStateTurnBase();
    initEventUserForAction(al::IUseEventFlowData const*);
};
