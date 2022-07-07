#pragma once

namespace nn { namespace nex { 

class TimedSignal
{
public:
    TimedSignal();
    TimedSignal(char const*);
    ~TimedSignal();
    SetOff();
    Reset();
    SetOn(int);
    SetSignal(int, nn::nex::TimedSignal::Signal);
    SetPulse(int);
    SetOnceOn(int);
    IsSignaled();
    IsDeadline();
    Trace();
    GetSignalString(nn::nex::TimedSignal::Signal);
};

} } 
