#pragma once

namespace nn { namespace nex { namespace LogToClientController { 

class LogDeviceInterface
{
public:
    LogDeviceInterface();
    ~LogDeviceInterface();
    GetInstance();
    s_pInstance;
};

} } } 
