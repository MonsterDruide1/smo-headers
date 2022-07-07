#pragma once

class EventFlowNodeCheckCostume
{
public:
    EventFlowNodeCheckCostume(char const*);
    init(al::EventFlowNodeInitInfo const&);
    getNextId() const;
    start();
};
