#pragma once

namespace nn { namespace nex { 

class JobProcessProtocolEvent
{
public:
    JobProcessProtocolEvent(nn::nex::ProtocolRequestBrokerInterface*, nn::nex::EndPoint*, char const*);
    ~JobProcessProtocolEvent();
    SetBroker(nn::nex::ProtocolRequestBrokerInterface*);
    GetLifeTime() const;
    GetProcessingTime() const;
    RecordProcessingStart();
    Trace(unsigned long);
    s_bFakeEndPoints;
};

} } 
