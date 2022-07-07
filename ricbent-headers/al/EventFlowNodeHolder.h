#pragma once

namespace al { 

class EventFlowNodeHolder
{
public:
    EventFlowNodeHolder(int);
    registerNode(al::EventFlowNode*);
    getNode(int) const;
    findNode(int) const;
};

} 
