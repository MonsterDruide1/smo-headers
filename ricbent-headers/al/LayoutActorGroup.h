#pragma once

namespace al { 

class LayoutActorGroup
{
public:
    LayoutActorGroup(char const*, int);
    registerActor(al::LayoutActor*);
    findDeadActor() const;
    tryFindDeadActor() const;
};

} 
