#pragma once

namespace agl { 

class GPUMemAddrBase
{
public:
    GPUMemAddrBase(agl::GPUMemBlockBase const&, unsigned long);
    verify_() const;
    deleteGPUMemBlock() const;
    invalidate();
    getAlignmentAddress() const;
    setByteOffsetByPtr(void*);
    roundUp(int);
    flushCPUCache(unsigned long) const;
    invalidateCPUCache(unsigned long) const;
};

} 
