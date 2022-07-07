#pragma once

namespace nn { namespace nex { 

class ServiceClient
{
public:
    ServiceClient(unsigned int);
    GetProtocolRegistry() const;
    ~ServiceClient();
    SetDefaultCredentials(nn::nex::Credentials*);
    GetStreamManager() const;
    SetCredentials(nn::nex::Credentials*);
    BindLocal(nn::nex::Credentials*);
    RegisterExtraProtocol(nn::nex::Protocol*, unsigned short);
    RegisterExtraProtocol(nn::nex::Protocol*);
    UnregisterExtraProtocol(nn::nex::Protocol*);
    RegisterProtocol(nn::nex::Protocol*);
    UnregisterProtocol(nn::nex::Protocol*);
    UseLocalLoopback(unsigned long, unsigned int);
    PrepareForConnection(nn::nex::Credentials*);
    Bind(nn::nex::Credentials*);
    Unbind();
    GetConnection(unsigned short) const;
    IsConnected() const;
    IsFaulty() const;
    SetDependentRvConnection(nn::nex::ProtocolCallContext*) const;
    ConnectionStateHasChanged();
};

} } 
