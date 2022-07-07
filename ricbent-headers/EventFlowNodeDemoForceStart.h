#pragma once

class EventFlowNodeDemoForceStart
{
public:
    EventFlowNodeDemoForceStart(char const*);
    init(al::EventFlowNodeInitInfo const&);
    control();
};
