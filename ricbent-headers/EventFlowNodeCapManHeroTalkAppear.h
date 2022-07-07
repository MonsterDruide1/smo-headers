#pragma once

class EventFlowNodeCapManHeroTalkAppear
{
public:
    EventFlowNodeCapManHeroTalkAppear(char const*);
    init(al::EventFlowNodeInitInfo const&);
    start();
    startAppear();
    exeDelay();
    exeAppearHomeInside();
    exeAppear();
};
