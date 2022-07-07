#pragma once

namespace nn { namespace nex { 

class Condition
{
public:
    WaitForEvent(nn::nex::NonReentrantableForcedCriticalSection*, unsigned int);
    Notify();
    Condition(bool);
    ~Condition();
    CancelAll();
    ResetEvent();
};

} } 
