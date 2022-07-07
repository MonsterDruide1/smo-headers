#pragma once

class EventFlowNodeEnableHint
{
public:
    EventFlowNodeEnableHint(char const*);
    init(al::EventFlowNodeInitInfo const&);
    start();
};
