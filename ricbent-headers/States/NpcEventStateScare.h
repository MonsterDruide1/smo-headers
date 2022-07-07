#pragma once

class NpcEventStateScare
{
public:
    NpcEventStateScare(al::LiveActor*, NpcEventStateScareActionParam const*);
    setActionParam(NpcEventStateScareActionParam const*);
    tryStart(al::EventFlowExecutor const*);
    kill();
    exeScareStart();
    exeScare();
    exeScareEnd();
    ~NpcEventStateScare();
};
