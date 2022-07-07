#pragma once

namespace al { 

class ScreenPointCheckGroup
{
public:
    ScreenPointCheckGroup(int);
    setValid(al::ScreenPointTarget*);
    setInvalid(al::ScreenPointTarget*);
    getTarget(int) const;
    setTarget(al::ScreenPointTarget*);
};

} 
