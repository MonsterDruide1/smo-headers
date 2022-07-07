#pragma once

namespace nn { namespace gfx { namespace util { 

class HemiSphereShape
{
public:
    HemiSphereShape(nn::gfx::util::PrimitiveShapeFormat, nn::gfx::PrimitiveTopology, int);
    CalculateVertexCount();
    CalculateIndexCount();
    ~HemiSphereShape();
    CalculateVertexBuffer();
    CalculateImpl(void*, unsigned long, void*, unsigned long);
    CalculateIndexBuffer<unsigned char>();
    CalculateIndexBuffer<unsigned short>();
    CalculateIndexBuffer<unsigned int>();
};

} } } 
