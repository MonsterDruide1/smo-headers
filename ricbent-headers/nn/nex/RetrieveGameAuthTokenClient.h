#pragma once

namespace nn { namespace nex { 

class RetrieveGameAuthTokenClient
{
public:
    RetrieveGameAuthToken(nn::nex::CallContext*, unsigned long, nn::nex::String const&, nn::nex::String*, nn::nex::String*);
    RetrieveGameAuthTokenClient();
    ~RetrieveGameAuthTokenClient();
};

} } 
