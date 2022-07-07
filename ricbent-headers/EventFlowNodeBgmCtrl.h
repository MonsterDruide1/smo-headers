#pragma once

class EventFlowNodeBgmCtrl
{
public:
    EventFlowNodeBgmCtrl(char const*);
    init(al::EventFlowNodeInitInfo const&);
    start();
    control();
};
