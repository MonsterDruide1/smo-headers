#pragma once

class EventFlowNodeCheckPlayerOnGround
{
public:
    EventFlowNodeCheckPlayerOnGround(char const*);
    init(al::EventFlowNodeInitInfo const&);
    getNextId() const;
    start();
};
