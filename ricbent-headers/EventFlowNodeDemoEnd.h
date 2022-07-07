#pragma once

class EventFlowNodeDemoEnd
{
public:
    EventFlowNodeDemoEnd(char const*);
    init(al::EventFlowNodeInitInfo const&);
    start();
    control();
};
