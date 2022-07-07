#pragma once

class EventFlowNodePopItem
{
public:
    EventFlowNodePopItem(char const*);
    init(al::EventFlowNodeInitInfo const&);
    start();
};
