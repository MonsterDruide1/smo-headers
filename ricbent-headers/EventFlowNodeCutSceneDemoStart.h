#pragma once

class EventFlowNodeCutSceneDemoStart
{
public:
    EventFlowNodeCutSceneDemoStart(char const*);
    init(al::EventFlowNodeInitInfo const&);
    start();
    control();
};
