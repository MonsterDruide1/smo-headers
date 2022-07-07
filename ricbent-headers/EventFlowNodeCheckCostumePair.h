#pragma once

class EventFlowNodeCheckCostumePair
{
public:
    EventFlowNodeCheckCostumePair(char const*);
    init(al::EventFlowNodeInitInfo const&);
    getNextId() const;
    start();
};
