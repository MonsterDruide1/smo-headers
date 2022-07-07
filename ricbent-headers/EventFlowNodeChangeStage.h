#pragma once

class EventFlowNodeChangeStage
{
public:
    EventFlowNodeChangeStage(char const*);
    init(al::EventFlowNodeInitInfo const&);
    start();
};
