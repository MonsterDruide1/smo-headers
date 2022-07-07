#pragma once

class EventFlowNodeCoinPayment
{
public:
    EventFlowNodeCoinPayment(char const*);
    init(al::EventFlowNodeInitInfo const&);
    start();
};
