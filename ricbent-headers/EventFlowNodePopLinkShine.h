#pragma once

class EventFlowNodePopLinkShine
{
public:
    EventFlowNodePopLinkShine(char const*);
    init(al::EventFlowNodeInitInfo const&);
    start();
    control();
};
