#pragma once

class EventFlowNodePlayerAction
{
public:
    EventFlowNodePlayerAction(char const*);
    init(al::EventFlowNodeInitInfo const&);
    start();
    control();
};
