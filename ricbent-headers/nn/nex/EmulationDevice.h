#pragma once

namespace nn { namespace nex { 

class EmulationDevice
{
public:
    EmulationDevice();
    ~EmulationDevice();
    SetLatency(unsigned int);
    SetJitter(unsigned int);
    SetBandwidth(unsigned int);
    SetProtocolHeaderSize(unsigned long);
    SetPacketDropProbability(float);
    GetLatency();
    GetJitter();
    GetBandwidth();
    GetPacketDropProbability();
    GetProtocolHeaderSize();
    Enable();
};

} } 
