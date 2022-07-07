#pragma once

class JangoCapStateTalkDemo
{
public:
    JangoCapStateTalkDemo(al::LiveActor*, al::ActorInitInfo const&);
    init();
    appear();
    receiveEvent(al::EventFlowEventData const*);
    exeRequestDemo();
    exeWipeOut();
    exeWipeWait();
    exeWipeIn();
    ~JangoCapStateTalkDemo();
};
