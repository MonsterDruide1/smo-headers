#pragma once

namespace al { 

class GpuMemAllocator
{
public:
    GpuMemAllocator();
    ~GpuMemAllocator();
    createMemory(char const*, int, sead::Heap*, int, agl::MemoryAttribute);
    findGpuMemInfo(char const*) const;
    createMemoryWithTmp(char const*, int, int, sead::Heap*, int, agl::MemoryAttribute);
    allocMemory(char const*, int, int);
    getTmpMemoryAddr(char const*) const;
    getTmpMemorySize(char const*) const;
};

} 
