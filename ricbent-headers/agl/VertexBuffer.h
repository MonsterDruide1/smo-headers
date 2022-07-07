#pragma once

namespace agl { 

class VertexBuffer
{
public:
    VertexBuffer();
    ~VertexBuffer();
    cleanUp_();
    setUpBuffer(agl::ConstGPUMemVoidAddr, unsigned long, unsigned long);
    flushCPUCache(unsigned int, unsigned long) const;
    invalidateGPUCache(agl::DrawContext*) const;
    setUpStream(int, agl::VertexStreamFormat, unsigned long, bool);
    setBufferPtr(agl::ConstGPUMemVoidAddr, unsigned int);
};

} 
