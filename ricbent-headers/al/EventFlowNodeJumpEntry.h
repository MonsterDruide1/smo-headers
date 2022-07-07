#pragma once

namespace al { 

class EventFlowNodeJumpEntry
{
public:
    EventFlowNodeJumpEntry(char const*);
    init(al::EventFlowNodeInitInfo const&);
    start();
    getNextEntry() const;
};

} 
