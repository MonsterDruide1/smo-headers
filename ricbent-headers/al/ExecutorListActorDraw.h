#pragma once

namespace al { 

class ExecutorListActorDraw
{
public:
    ExecutorListActorDraw(char const*, int);
    createExecutor(char const*) const;
    ~ExecutorListActorDraw();
};

} 
