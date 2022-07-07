#pragma once

namespace al { 

class AsyncFunctorThread
{
public:
    AsyncFunctorThread(sead::SafeStringBase<char> const&, al::FunctorBase const&, int, int, sead::CoreId);
    threadFunction(sead::Thread*, long);
    ~AsyncFunctorThread();
    start();
    isDone() const;
};

} 
