#pragma once

namespace nn { namespace gfx { namespace util { 

class PrimitiveShape
{
public:
    PrimitiveShape(nn::gfx::util::PrimitiveShapeFormat, nn::gfx::PrimitiveTopology);
    ~PrimitiveShape();
    GetIndexBuffer() const;
    GetVertexBuffer() const;
    GetStride() const;
    GetVertexBufferSize() const;
    GetIndexBufferSize() const;
    GetPrimitiveTopology() const;
    GetVertexFormat() const;
    GetIndexBufferFormat() const;
    GetVertexCount() const;
    GetIndexCount() const;
    Calculate(void*, unsigned long, void*, unsigned long);
    SetVertexBuffer(void*);
    SetIndexBuffer(void*);
    SetVertexBufferSize(unsigned long);
    SetIndexBufferSize(unsigned long);
    SetVertexCount(int);
    SetIndexCount(int);
};

} } } 
