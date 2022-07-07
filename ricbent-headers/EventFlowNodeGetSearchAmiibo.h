#pragma once

class EventFlowNodeGetSearchAmiibo
{
public:
    EventFlowNodeGetSearchAmiibo(char const*);
    init(al::EventFlowNodeInitInfo const&);
    start();
    getNextId() const;
};
