#pragma once

namespace nn { namespace nex { 

class ProtocolRequestBrokerInterface
{
public:
    InitMessage(nn::nex::Message*, unsigned short, nn::nex::Protocol::_Command);
    ProtocolRequestBrokerInterface();
    ~ProtocolRequestBrokerInterface();
    Receive(nn::nex::EndPoint*, nn::nex::Buffer*);
    s_bOutputFormatIsRegistered;
};

} } 
