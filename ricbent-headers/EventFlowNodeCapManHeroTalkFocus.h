#pragma once

class EventFlowNodeCapManHeroTalkFocus
{
public:
    EventFlowNodeCapManHeroTalkFocus(char const*);
    init(al::EventFlowNodeInitInfo const&);
    start();
    control();
};
