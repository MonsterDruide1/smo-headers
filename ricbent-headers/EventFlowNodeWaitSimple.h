#pragma once

class EventFlowNodeWaitSimple
{
public:
    EventFlowNodeWaitSimple(char const*);
    init(al::EventFlowNodeInitInfo const&);
    start();
    exeWait();
};
