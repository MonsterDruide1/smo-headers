#pragma once

namespace nn { namespace gfx { namespace util { 

class CylinderShape
{
public:
    CylinderShape(nn::gfx::util::PrimitiveShapeFormat, nn::gfx::PrimitiveTopology, int);
    CalculateVertexCount();
    CalculateIndexCount();
    ~CylinderShape();
    CalculateVertexBuffer();
    CalculateImpl(void*, unsigned long, void*, unsigned long);
    CalculateIndexBuffer<unsigned char>();
    CalculateIndexBuffer<unsigned short>();
    CalculateIndexBuffer<unsigned int>();
};

} } } 
