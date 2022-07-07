#pragma once

namespace nn { namespace nex { 

class SystemClock
{
public:
    SystemClock();
    ~SystemClock();
    RegisterTimeProvider(nn::nex::TimeProvider*, bool);
    ApplyCorrection(nn::nex::Time, nn::nex::Time);
    ProtectedGetTime();
    GetTimeImpl(bool);
    GetTimeImplCorrectless();
    Reset();
    s_bUseHighPerformanceCounter;
    s_needCorrection;
    s_pTimeProvider;
    s_tiCorrection;
    s_bInitialized;
    s_cachedTime;
    s_csTimeCorrection;
};

} } 
