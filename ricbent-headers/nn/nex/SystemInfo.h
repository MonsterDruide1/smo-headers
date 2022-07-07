#pragma once

namespace nn { namespace nex { 

class SystemInfo
{
public:
    SystemInfo();
    ~SystemInfo();
    IsRunningNT(unsigned int*);
    IsRunning95();
    IsRunning98();
    IsRunningLinux();
    IsRunningPS2();
    GetMachineName();
    GetPlatformDescription();
};

} } 
