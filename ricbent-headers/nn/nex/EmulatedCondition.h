#pragma once

namespace nn { namespace nex { 

class EmulatedCondition
{
public:
    EmulatedCondition(bool);
    ~EmulatedCondition();
    CancelAll();
    Notify();
    ResetEvent();
    WaitForEvent(nn::nex::NonReentrantableForcedCriticalSection*, unsigned int);
};

} } 
