#pragma once

namespace nn { namespace nex { 

class PRUDPStreamTemplateBase
{
public:
    PRUDPStreamTemplateBase(nn::nex::Stream::Type, nn::nex::PRUDPMessageInterface*);
    ServiceTimeouts(nn::nex::Time const&);
    ~PRUDPStreamTemplateBase();
    GetStreamType();
};

} } 
