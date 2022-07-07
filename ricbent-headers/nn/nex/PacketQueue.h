#pragma once

namespace nn { namespace nex { 

class PacketQueue
{
public:
    Purge();
    Dequeue(nn::nex::qChain<nn::nex::Packet*, nn::nex::DefaultChainPolicy<nn::nex::Packet*> >::iterator);
    PacketQueue(char const*);
    ~PacketQueue();
    Queue(nn::nex::Packet*, bool);
    QueueFront(nn::nex::Packet*, bool);
    GetLock();
};

} } 
