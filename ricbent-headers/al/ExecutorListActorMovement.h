#pragma once

namespace al { 

class ExecutorListActorMovement
{
public:
    ExecutorListActorMovement(char const*, int);
    createExecutor(char const*) const;
    ~ExecutorListActorMovement();
};

} 
