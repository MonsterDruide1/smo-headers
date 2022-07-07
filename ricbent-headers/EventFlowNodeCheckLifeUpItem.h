#pragma once

class EventFlowNodeCheckLifeUpItem
{
public:
    EventFlowNodeCheckLifeUpItem(char const*);
    init(al::EventFlowNodeInitInfo const&);
    start();
    getNextId() const;
    control();
};
