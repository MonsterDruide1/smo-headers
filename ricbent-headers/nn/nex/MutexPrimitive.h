#pragma once

namespace nn { namespace nex { 

class MutexPrimitive
{
public:
    MutexPrimitive(bool);
    ~MutexPrimitive();
    s_bNoOp;
};

} } 
