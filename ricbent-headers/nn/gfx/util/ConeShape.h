#pragma once

namespace nn { namespace gfx { namespace util { 

class ConeShape
{
public:
    ConeShape(nn::gfx::util::PrimitiveShapeFormat, nn::gfx::PrimitiveTopology, int);
    CalculateVertexCount();
    CalculateIndexCount();
    ~ConeShape();
    CalculateVertexBuffer();
    CalculateImpl(void*, unsigned long, void*, unsigned long);
    CalculateIndexBuffer<unsigned char>();
    CalculateIndexBuffer<unsigned short>();
    CalculateIndexBuffer<unsigned int>();
};

} } } 
