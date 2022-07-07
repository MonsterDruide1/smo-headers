#pragma once

namespace nn { namespace nex { 

class InterfaceInfo
{
public:
    InterfaceInfo();
    ~InterfaceInfo();
    SetAddress(unsigned int);
    SetBroadcastAddress(unsigned int);
    SetMask(unsigned int);
    SetFlags(unsigned int);
    SetName(char*);
    Addr2Str(unsigned int, char*, unsigned int);
    GetAddress(char*, unsigned int);
    GetBroadcastAddress(char*, unsigned int);
    GetMask(char*, unsigned int);
    GetName(char*, unsigned int);
    GetFlags(char*, unsigned int);
    GetAddress();
    GetBroadcastAddress();
    GetMask();
    GetFlags();
    GetName();
    Trace(unsigned long);
};

} } 
