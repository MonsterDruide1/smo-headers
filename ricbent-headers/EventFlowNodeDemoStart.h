#pragma once

class EventFlowNodeDemoStart
{
public:
    EventFlowNodeDemoStart(char const*);
    init(al::EventFlowNodeInitInfo const&);
    control();
};
