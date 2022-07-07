#pragma once

namespace al { 

class EventFlowNodeCaseEventHolder
{
public:
    EventFlowNodeCaseEventHolder();
    init(al::ByamlIter const&, al::IUseMessageSystem const*);
    findNextId(char const*) const;
    getNextId(int) const;
    getMessage(int) const;
    tryGetMessage(int) const;
};

} 
