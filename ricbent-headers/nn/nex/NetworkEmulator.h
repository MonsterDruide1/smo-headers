#pragma once

namespace nn { namespace nex { 

class NetworkEmulator
{
public:
    NetworkEmulator(nn::nex::EmulationDevice*);
    Queue(nn::nex::Buffer*, nn::nex::InetAddress const&);
    GetHead(nn::nex::Buffer**, nn::nex::InetAddress*);
    Dequeue(nn::nex::Buffer*);
    Trace(unsigned long);
    ~NetworkEmulator();
};

} } 
