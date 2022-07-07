#pragma once

namespace nn { namespace nex { 

class ClientProtocol
{
public:
    GetType() const;
    IsAKindOf(char const*) const;
    EnforceDeclareSysComponentMacro();
    GetProtocolType() const;
    ClientProtocol(unsigned int);
    ~ClientProtocol();
    SetCallError(nn::nex::qResult);
    SendOverLocalLoopback(nn::nex::ProtocolCallContext*, nn::nex::Message*);
    SendRMCMessage(nn::nex::ProtocolCallContext*, nn::nex::Message*);
    ProcessResponse(nn::nex::Message*, nn::nex::EndPoint*);
    SetDefaultCredentials(nn::nex::Credentials*);
};

} } 
