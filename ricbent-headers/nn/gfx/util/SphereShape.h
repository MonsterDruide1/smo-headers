#pragma once

namespace nn { namespace gfx { namespace util { 

class SphereShape
{
public:
    SphereShape(nn::gfx::util::PrimitiveShapeFormat, nn::gfx::PrimitiveTopology, int, int);
    CalculateVertexCount();
    CalculateIndexCount();
    ~SphereShape();
    CalculateVertexBuffer();
    CalculateImpl(void*, unsigned long, void*, unsigned long);
    CalculateIndexBuffer<unsigned char>();
    CalculateIndexBuffer<unsigned short>();
    CalculateIndexBuffer<unsigned int>();
};

} } } 
