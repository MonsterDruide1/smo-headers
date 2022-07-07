#pragma once

namespace nn { namespace nex { 

class TransportBufferMultiThread
{
public:
    TransportBufferMultiThread();
    ~TransportBufferMultiThread();
    StartSendingThread();
    TransportSendLoop(int);
    StopSendingThread();
    InsertSocketPort(unsigned short, nn::nex::QueuingSocketTransportBuffer*);
    EraseSocketPort(nn::nex::TransportProtocol::Type, unsigned short);
};

} } 
