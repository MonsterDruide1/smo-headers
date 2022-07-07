#pragma once

class EventFlowNodeNormalDemoTryStart
{
public:
    EventFlowNodeNormalDemoTryStart(char const*);
    init(al::EventFlowNodeInitInfo const&);
    start();
    getNextId() const;
};
