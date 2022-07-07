#pragma once

namespace nn { namespace atk { namespace detail { 

class TaskThread
{
public:
    TaskThread();
    ~TaskThread();
    Destroy();
    Create(int, void*, unsigned long, int, unsigned int);
    Run(void*);
    GetInstance();
};

} } } 
