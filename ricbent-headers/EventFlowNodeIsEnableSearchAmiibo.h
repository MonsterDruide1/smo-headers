#pragma once

class EventFlowNodeIsEnableSearchAmiibo
{
public:
    EventFlowNodeIsEnableSearchAmiibo(char const*);
    init(al::EventFlowNodeInitInfo const&);
    start();
    getNextId() const;
};
