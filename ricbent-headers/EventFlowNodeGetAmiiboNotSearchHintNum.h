#pragma once

class EventFlowNodeGetAmiiboNotSearchHintNum
{
public:
    EventFlowNodeGetAmiiboNotSearchHintNum(char const*);
    init(al::EventFlowNodeInitInfo const&);
    start();
    getNextId() const;
};
