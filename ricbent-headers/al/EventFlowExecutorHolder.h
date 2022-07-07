#pragma once

namespace al { 

class EventFlowExecutorHolder
{
public:
    EventFlowExecutorHolder(int);
    registerExecutor(al::EventFlowExecutor*);
    initAfterPlacement();
};

} 
