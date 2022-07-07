#pragma once

class EventFlowNodeCheckOpenDoorSnow
{
public:
    EventFlowNodeCheckOpenDoorSnow(char const*);
    init(al::EventFlowNodeInitInfo const&);
    getNextId() const;
    start();
};
