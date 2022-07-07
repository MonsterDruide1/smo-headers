#pragma once

class EventFlowNodeCapMessage
{
public:
    EventFlowNodeCapMessage(char const*);
    init(al::EventFlowNodeInitInfo const&);
    start();
    control();
};
