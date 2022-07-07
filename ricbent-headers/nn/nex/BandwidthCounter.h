#pragma once

namespace nn { namespace nex { 

class BandwidthCounter
{
public:
    GetList();
    GetCriticalSection();
    ResetAll();
    Reset();
    LogAll(bool);
    Log();
    BandwidthCounter(nn::nex::String const&);
    ~BandwidthCounter();
    operator+=(unsigned long);
    Trace(unsigned long);
    s_lstBWCounters;
    s_cs;
};

} } 
