#pragma once

namespace nn { namespace nex { 

class ServerProtocol
{
public:
    GetType() const;
    IsAKindOf(char const*) const;
    EnforceDeclareSysComponentMacro();
    GetProtocolType() const;
    DispatchProtocolMessageWithAttemptCount(unsigned long, nn::nex::Message*, nn::nex::Message*, bool*, int*, nn::nex::EndPoint*);
    UseAttemptCountMethod();
    ~ServerProtocol();
    SetCallError(nn::nex::qResult);
    DispatchCallRequest(unsigned long, nn::nex::Message*, nn::nex::Message*, bool*, int*, nn::nex::EndPoint*);
    ServerProtocol(unsigned int);
    s_oNonInitializedServerProtocols;
};

} } 
