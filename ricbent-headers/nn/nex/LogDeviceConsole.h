#pragma once

namespace nn { namespace nex { 

class LogDeviceConsole
{
public:
    LogDeviceConsole(void*);
    Output(char const*);
    ~LogDeviceConsole();
};

} } 
