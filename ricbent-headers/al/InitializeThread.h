#pragma once

namespace al { 

class InitializeThread
{
public:
    InitializeThread(sead::SafeStringBase<char> const&, al::FunctorBase const&, sead::Heap*, int, int);
    threadFunction(sead::Thread*, long);
    start();
    tryWaitDoneAndDestroy();
};

} 
