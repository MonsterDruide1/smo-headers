#pragma once

class EventFlowNodeCheckMoonLockOpened
{
public:
    EventFlowNodeCheckMoonLockOpened(char const*);
    init(al::EventFlowNodeInitInfo const&);
    getNextId() const;
    start();
};
