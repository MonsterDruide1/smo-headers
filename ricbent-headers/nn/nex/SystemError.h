#pragma once

namespace nn { namespace nex { 

class SystemError
{
public:
    GetErrorString(unsigned int, char*, unsigned int);
    GetLast();
    SignalError(char const*, unsigned int, unsigned int, unsigned int);
    SystemError(char const*, unsigned int);
    SetErrorInfo(unsigned int, unsigned int);
    Trace(unsigned long);
    EraseErrorElements(unsigned long);
    EraseErrorElements();
    EraseAllErrorElements();
    ClearLast();
    GetLastExt();
    IsError();
    IsError(unsigned int);
    IsWarning(unsigned int);
    IsInformational(unsigned int);
    IsSuccess(unsigned int);
    TraceLast(unsigned long);
    ~SystemError();
};

} } 
