#pragma once

namespace nn { namespace nex { 

class AuthenticationClient
{
public:
    AuthenticationClient();
    ~AuthenticationClient();
    UpdateProtocolsDefaultCredentials(nn::nex::Credentials*);
    Rebind(nn::nex::Credentials*);
    ValidateAndAcquireSecureConnectionData(nn::nex::ProtocolCallContext*, nn::nex::qResult*, nn::nex::String const&, char const*, nn::nex::RVConnectionData*, nn::nex::String*, nn::nex::AnyObjectHolder<nn::nex::Data, nn::nex::String>*);
    GetPID(nn::nex::ProtocolCallContext*, unsigned long*, nn::nex::String);
    GetName(nn::nex::ProtocolCallContext*, nn::nex::String*, unsigned long);
};

} } 
