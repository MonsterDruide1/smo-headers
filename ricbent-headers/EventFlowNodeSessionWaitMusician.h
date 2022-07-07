#pragma once

class EventFlowNodeSessionWaitMusician
{
public:
    EventFlowNodeSessionWaitMusician(char const*);
    init(al::EventFlowNodeInitInfo const&);
    getNextId() const;
    start();
};
