#pragma once

namespace al { 

class EventFlowNode
{
public:
    getEventFlowDataHolder() const;
    initAfterChart();
    initAfterPlacement();
    end();
    control();
    getNextEntry() const;
    getMessageSystem() const;
    getNerveKeeper() const;
    isEnableEndFork() const;
    getNextId() const;
    start();
    EventFlowNode(char const*);
    initNerve(al::Nerve const*, int);
    execute();
    init(al::EventFlowNodeInitInfo const&);
};

} 
