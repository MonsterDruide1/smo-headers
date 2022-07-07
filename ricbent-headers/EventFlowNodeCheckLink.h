#pragma once

class EventFlowNodeCheckLink
{
public:
    EventFlowNodeCheckLink(char const*);
    init(al::EventFlowNodeInitInfo const&);
    getNextId() const;
    start();
};
