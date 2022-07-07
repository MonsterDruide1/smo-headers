#pragma once

namespace nn { namespace nex { 

class RefBuffer
{
public:
    RefBuffer();
    Initialize();
    RefBuffer(nn::nex::RefBuffer const&);
    operator=(nn::nex::RefBuffer const&);
    ~RefBuffer();
    ReleaseBuffer();
    operator=(nn::nex::Buffer&);
};

} } 
