#pragma once

class EventFlowNodeCheckFlag
{
public:
    EventFlowNodeCheckFlag(char const*);
    init(al::EventFlowNodeInitInfo const&);
    getNextId() const;
    start();
};
