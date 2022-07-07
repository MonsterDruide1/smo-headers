#pragma once

class EventFlowNodeCheckGetLinkShine
{
public:
    EventFlowNodeCheckGetLinkShine(char const*);
    init(al::EventFlowNodeInitInfo const&);
    getNextId() const;
    start();
};
