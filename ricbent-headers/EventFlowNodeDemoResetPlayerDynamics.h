#pragma once

class EventFlowNodeDemoResetPlayerDynamics
{
public:
    EventFlowNodeDemoResetPlayerDynamics(char const*);
    init(al::EventFlowNodeInitInfo const&);
    start();
    control();
};
