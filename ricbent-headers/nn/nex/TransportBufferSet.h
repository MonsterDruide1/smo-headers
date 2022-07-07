#pragma once

namespace nn { namespace nex { 

class TransportBufferSet
{
public:
    TransportBufferSet(nn::nex::TransportBuffer*, int);
    ~TransportBufferSet();
    ClearList_(nn::nex::qReservedQueue<nn::nex::TransportBufferSet::TransportBufferInfo*>&);
    Pop(nn::nex::Buffer*, nn::nex::InetAddress*);
    DeleteOneBuffer_(nn::nex::TransportBufferSet::TransportBufferInfo*);
    Push(nn::nex::Buffer*, nn::nex::InetAddress const&);
};

} } 
