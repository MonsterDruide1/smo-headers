#pragma once

namespace al { 

class EventFlowActorParamHolder
{
public:
    EventFlowActorParamHolder();
    load(al::ByamlIter const&);
    findSuffixParam(char const*) const;
};

} 
