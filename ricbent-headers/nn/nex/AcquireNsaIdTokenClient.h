#pragma once

namespace nn { namespace nex { 

class AcquireNsaIdTokenClient
{
public:
    AcquireNsaIdToken(nn::nex::CallContext*, nn::account::UserHandle const*, nn::nex::String*, unsigned long*, nn::Result*);
    AcquireNsaIdTokenClient();
    ~AcquireNsaIdTokenClient();
};

} } 
