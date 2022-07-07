#pragma once

namespace nn { namespace gfx { namespace util { 

class PipeShape
{
public:
    PipeShape(nn::gfx::util::PrimitiveShapeFormat, nn::gfx::PrimitiveTopology, int);
    CalculateVertexCount();
    CalculateIndexCount();
    ~PipeShape();
    CalculateVertexBuffer();
    CalculateImpl(void*, unsigned long, void*, unsigned long);
    CalculateIndexBuffer<unsigned char>();
    CalculateIndexBuffer<unsigned short>();
    CalculateIndexBuffer<unsigned int>();
};

} } } 
