#pragma once

namespace sead { 

class ParallelSZSDecompressor
{
public:
    ParallelSZSDecompressor(unsigned int, int, sead::Heap*, unsigned char*, sead::CoreIdMask const&);
    ~ParallelSZSDecompressor();
    tryDecompFromDevice(sead::ResourceMgr::LoadArg const&, sead::Resource*, unsigned int*, unsigned int*, bool*);
    setDivSize(unsigned int);
};

} 
