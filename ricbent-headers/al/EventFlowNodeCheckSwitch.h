#pragma once

namespace al { 

class EventFlowNodeCheckSwitch
{
public:
    EventFlowNodeCheckSwitch(char const*);
    init(al::EventFlowNodeInitInfo const&);
    getNextId() const;
    start();
};

} 
