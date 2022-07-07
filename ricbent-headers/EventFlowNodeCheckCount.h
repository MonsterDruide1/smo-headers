#pragma once

class EventFlowNodeCheckCount
{
public:
    EventFlowNodeCheckCount(char const*);
    init(al::EventFlowNodeInitInfo const&);
    getNextId() const;
    start();
    control();
};
