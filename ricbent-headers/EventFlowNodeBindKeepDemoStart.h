#pragma once

class EventFlowNodeBindKeepDemoStart
{
public:
    EventFlowNodeBindKeepDemoStart(char const*);
    init(al::EventFlowNodeInitInfo const&);
    start();
    getNextId() const;
};
