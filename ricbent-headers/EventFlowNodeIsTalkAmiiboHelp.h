#pragma once

class EventFlowNodeIsTalkAmiiboHelp
{
public:
    EventFlowNodeIsTalkAmiiboHelp(char const*);
    init(al::EventFlowNodeInitInfo const&);
    start();
    getNextId() const;
};
