#pragma once

namespace nn { namespace nex { 

class Platform
{
public:
    Sleep(unsigned int);
    GetTick();
    Platform();
    ~Platform();
    Instance();
    CreateInstance();
    DeleteInstance();
    NetworkToHost(unsigned char const*, unsigned short*);
    NetworkToHost(unsigned char const*, unsigned int*);
    NetworkToHost(unsigned char const*, unsigned long*);
    HostToNetwork(unsigned short const*, unsigned char*);
    HostToNetwork(unsigned int const*, unsigned char*);
    HostToNetwork(unsigned long const*, unsigned char*);
    WarnObsoleteMethod(char const*, char const*);
    SetRandomNumberSeed(unsigned int);
    GetRandomNumber(unsigned int);
    GetRandomSeed();
    GetRealRandomNumber(float);
    GetProcessID();
    GetPlatformID();
    Breakpoint();
    YieldThread();
    _Instance;
    m_oErrorTable;
    s_oRNG;
    s_bSeedIsInitialized;
};

} } 
