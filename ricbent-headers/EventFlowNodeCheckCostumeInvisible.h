#pragma once

class EventFlowNodeCheckCostumeInvisible
{
public:
    EventFlowNodeCheckCostumeInvisible(char const*);
    init(al::EventFlowNodeInitInfo const&);
    getNextId() const;
    start();
};
