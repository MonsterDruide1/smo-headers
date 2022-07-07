#pragma once

class EventFlowNodeDemoForceStartOnGround
{
public:
    EventFlowNodeDemoForceStartOnGround(char const*);
    init(al::EventFlowNodeInitInfo const&);
    control();
};
