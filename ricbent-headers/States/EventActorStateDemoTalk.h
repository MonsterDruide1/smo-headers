#pragma once

class EventActorStateDemoTalk
{
public:
    EventActorStateDemoTalk(al::LiveActor*);
    appear();
    exeWait();
    exeTalk();
    exeTalkAfter();
    ~EventActorStateDemoTalk();
};
