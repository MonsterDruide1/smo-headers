#pragma once

namespace nn { namespace nex { 

class Credentials
{
public:
    GetConnection(unsigned short) const;
    Credentials(unsigned long, nn::nex::StreamManager*);
    Credentials();
    ~Credentials();
    Logout();
    SetAuthenticationConnection(nn::nex::EndPoint*);
    SetSecureConnection(nn::nex::EndPoint*);
    SetStreamManagerForAuthentication(nn::nex::StreamManager*);
    SetStreamManagerForSecure(nn::nex::StreamManager*);
    MarkAllInvalid(nn::nex::StreamManager**, nn::nex::StreamManager**);
    MarkAuthInvalidAndUseSecureAsAuth(nn::nex::StreamManager**);
};

} } 
