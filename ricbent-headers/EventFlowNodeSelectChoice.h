#pragma once

class EventFlowNodeSelectChoice
{
public:
    EventFlowNodeSelectChoice(char const*);
    init(al::EventFlowNodeInitInfo const&);
    start();
    control();
    getNextId() const;
};
