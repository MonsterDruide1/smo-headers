#pragma once

namespace al { 

class ExecuteAsyncExecutor
{
public:
    ExecuteAsyncExecutor(al::ExecuteDirector const*, char const*, sead::CoreId);
    executeAsync(sead::Thread*, long);
    ~ExecuteAsyncExecutor();
    executeAsync();
    waitAsync();
};

} 
