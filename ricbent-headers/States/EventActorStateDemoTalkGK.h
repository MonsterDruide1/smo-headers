#pragma once

class EventActorStateDemoTalkGK
{
public:
    EventActorStateDemoTalkGK(al::LiveActor*, ParamEventActorStateDemoTalkGK const*);
    appear();
    exeWait();
    chaseWaitAnimWeightOne();
    exeTalk();
    chaseTalkAnimWeightOne();
    exeTalkAfter();
    ~EventActorStateDemoTalkGK();
};
