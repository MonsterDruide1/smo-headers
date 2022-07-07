#pragma once

namespace nn { namespace nex { 

class LogDeviceMemory
{
public:
    LogDeviceMemory(char*, int, char const*, char**);
    SetBuffer(char*, int, char**);
    ~LogDeviceMemory();
    Output(char const*);
};

} } 
