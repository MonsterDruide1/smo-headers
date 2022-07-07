#pragma once

namespace al { 

class EventFlowNodeEventQuery
{
public:
    EventFlowNodeEventQuery(char const*);
    init(al::EventFlowNodeInitInfo const&);
    start();
    getNextId() const;
};

} 
