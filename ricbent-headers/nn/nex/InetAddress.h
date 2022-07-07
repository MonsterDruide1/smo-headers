#pragma once

namespace nn { namespace nex { 

class InetAddress
{
public:
    GetKey() const;
    GetPortNumber() const;
    EnableAutoLookup(bool);
    InetAddress();
    Init();
    InetAddress(nn::nex::InetAddress const&);
    operator=(nn::nex::InetAddress const&);
    InetAddress(void*, unsigned int);
    InetAddress(char const*, unsigned short);
    SetAddress(char const*);
    SetPortNumber(unsigned short);
    InetAddress(unsigned int, unsigned short);
    SetAddress(unsigned int);
    ~InetAddress();
    SetLocalHost();
    IsLocalHost() const;
    GetAddress() const;
    String2Address(char const*);
    GetAddress(char*, unsigned long) const;
    SetNetworkAddress(unsigned int);
    GetAddressStr() const;
    SetNetworkPortNumber(unsigned short);
    GetPortNumber(char*, unsigned int) const;
    GetPortNumberStr() const;
    Trace(unsigned long) const;
    ToStr(char*) const;
    ToStr() const;
    s_bAutoLookup;
};

} } 
