#pragma once

namespace al { 

class EventFlowNodeQueryJudge
{
public:
    EventFlowNodeQueryJudge(char const*);
    init(al::EventFlowNodeInitInfo const&);
    start();
    getNextId() const;
};

} 
