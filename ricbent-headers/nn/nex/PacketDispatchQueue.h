#pragma once

namespace nn { namespace nex { 

class PacketDispatchQueue
{
public:
    PacketDispatchQueue();
    ~PacketDispatchQueue();
    Purge();
    Queue(nn::nex::PacketIn*);
    GetNextToDispatch();
    Dispatched(nn::nex::PacketIn*);
    s_wmDispatchQueue;
};

} } 
