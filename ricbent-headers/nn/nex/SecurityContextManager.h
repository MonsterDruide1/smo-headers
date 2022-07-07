#pragma once

namespace nn { namespace nex { 

class SecurityContextManager
{
public:
    SecurityContextManager();
    ~SecurityContextManager();
    GetInstance();
    Push(unsigned long, unsigned int, unsigned int);
    Pop();
    StaticGetCurrentPID();
    GetCurrentPID() const;
    StaticGetCurrentCID();
    GetCurrentCID() const;
    GetCurrentAddress() const;
};

} } 
