#pragma once

namespace al { 

class EventFlowChart
{
public:
    EventFlowChart();
    init(al::EventFlowChartInitInfo const&);
    initAfterPlacement();
    findEntryNode(char const*) const;
    findNodeById(int) const;
    isExistEntry(char const*) const;
};

} 
