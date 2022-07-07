#pragma once

class StateStageTalkDemoCapManHero
{
public:
    StateStageTalkDemoCapManHero(al::LiveActor*, al::ActorInitInfo const&, char const*, char const*, al::IEventFlowEventReceiver*);
    preEventFromSceneFirstMoonGet(char const*);
    appear();
    kill();
    receiveEventFromHost(al::EventFlowEventData const*);
    exeDemoWait();
    exeEvent();
    ~StateStageTalkDemoCapManHero();
};
