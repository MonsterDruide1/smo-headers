#pragma once

namespace agl { namespace perf { 

class GPUTimeStampArray
{
public:
    GPUTimeStampArray();
    ~GPUTimeStampArray();
    allocBuffer(int, sead::Heap*);
    getNext(agl::perf::GPUTimeStampArray::Type);
};

} } 
