#pragma once

namespace al { 

class EventFlowNodeFork
{
public:
    EventFlowNodeFork(char const*);
    init(al::EventFlowNodeInitInfo const&);
    initAfterChart();
    start();
    control();
    getNextId() const;
};

} 
