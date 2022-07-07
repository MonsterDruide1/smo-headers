#pragma once

namespace agl { 

class IndexStream
{
public:
    IndexStream();
    ~IndexStream();
    cleanUp_();
    setUpStream_(agl::ConstGPUMemVoidAddr, agl::IndexStreamFormat, unsigned int);
    flushCPUCache(unsigned int, unsigned int) const;
    invalidateGPUCache(agl::DrawContext*) const;
    setBufferPtr(agl::ConstGPUMemVoidAddr, unsigned int);
};

} 
