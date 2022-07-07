#pragma once

namespace nn { namespace nex { 

class NATCheckClient
{
public:
    NATCheckClient();
    NATCheckClient(nn::nex::InetAddress const&);
    ~NATCheckClient();
    DetectFullNATProperties(nn::nex::CallContext*);
    DetectSimplifiedNATProperties(nn::nex::CallContext*);
    DetectNATCurrentPortMapping(nn::nex::CallContext*, bool);
};

} } 
