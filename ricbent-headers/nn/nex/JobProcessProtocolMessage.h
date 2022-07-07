#pragma once

namespace nn { namespace nex { 

class JobProcessProtocolMessage
{
public:
    JobProcessProtocolMessage(nn::nex::ProtocolRequestBrokerInterface*, nn::nex::EndPoint*, nn::nex::Buffer*);
    ~JobProcessProtocolMessage();
    Execute();
    Trace(unsigned long);
    s_wmProcessProtocolMessage;
};

} } 
