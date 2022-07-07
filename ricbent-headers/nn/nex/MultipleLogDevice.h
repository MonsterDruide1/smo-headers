#pragma once

namespace nn { namespace nex { 

class MultipleLogDevice
{
public:
    MultipleLogDevice(bool);
    ~MultipleLogDevice();
    RemoveAll(bool);
    AddLogDevice(nn::nex::LogDevice*);
    RemoveLogDevice(nn::nex::LogDevice*, bool);
    Output(char const*);
    OutputImpl(char const*);
};

} } 
