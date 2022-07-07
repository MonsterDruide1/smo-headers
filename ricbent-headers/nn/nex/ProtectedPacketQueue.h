#pragma once

namespace nn { namespace nex { 

class ProtectedPacketQueue
{
public:
    ~ProtectedPacketQueue();
    Purge();
    Queue(nn::nex::Packet*, bool);
    QueueFront(nn::nex::Packet*, bool);
    Dequeue(nn::nex::qChain<nn::nex::Packet*, nn::nex::DefaultChainPolicy<nn::nex::Packet*> >::iterator);
    GetLock();
};

} } 
