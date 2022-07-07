#pragma once

class EventFlowNodeCheckCostumeMissMatchPart
{
public:
    EventFlowNodeCheckCostumeMissMatchPart(char const*);
    init(al::EventFlowNodeInitInfo const&);
    getNextId() const;
    start();
};
