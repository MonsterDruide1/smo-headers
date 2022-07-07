#pragma once

namespace nn { namespace nex { namespace TransportBufferMultiThread { 

class TransportProtocolContext
{
public:
    TransportProtocolContext();
    ~TransportProtocolContext();
    Send();
    Add(unsigned short, nn::nex::QueuingSocketTransportBuffer*);
    Remove(unsigned short);
    Receive();
    TransportRecvLoop(int);
    StartReceivingThread();
    StopReceivingThread();
};

} } } 
