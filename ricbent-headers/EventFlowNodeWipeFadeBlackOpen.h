#pragma once

class EventFlowNodeWipeFadeBlackOpen
{
public:
    EventFlowNodeWipeFadeBlackOpen(char const*);
    init(al::EventFlowNodeInitInfo const&);
    control();
};
