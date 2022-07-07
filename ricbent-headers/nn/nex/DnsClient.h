#pragma once

namespace nn { namespace nex { 

class DnsClient
{
public:
    DnsClient();
    ~DnsClient();
    GenericDnsResolveMethod();
    Resolve(nn::nex::CallContext*, nn::nex::String const&, nn::nex::String*);
};

} } 
