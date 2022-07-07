#pragma once

namespace sead { 

class StackTraceBase
{
public:
    StackTraceBase();
    trace(void const*);
    ~StackTraceBase();
};

} 
