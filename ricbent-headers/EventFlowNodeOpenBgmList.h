#pragma once

class EventFlowNodeOpenBgmList
{
public:
    EventFlowNodeOpenBgmList(char const*);
    init(al::EventFlowNodeInitInfo const&);
    start();
    control();
};
