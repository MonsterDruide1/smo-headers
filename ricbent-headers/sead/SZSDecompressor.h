#pragma once

namespace sead { 

class SZSDecompressor
{
public:
    getDecompSize(void const*);
    getDecompAlignment(void const*);
    readHeader_(sead::SZSDecompressor::DecompContext*, unsigned char const*, unsigned int);
    streamDecomp(sead::SZSDecompressor::DecompContext*, void const*, unsigned int);
    decomp(void*, unsigned int, void const*, unsigned int);
    SZSDecompressor(unsigned int, unsigned char*);
    tryDecompFromDevice(sead::ResourceMgr::LoadArg const&, sead::Resource*, unsigned int*, unsigned int*, bool*);
    setWorkSize(unsigned int);
    ~SZSDecompressor();
};

} 
