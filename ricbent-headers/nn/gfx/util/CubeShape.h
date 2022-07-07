#pragma once

namespace nn { namespace gfx { namespace util { 

class CubeShape
{
public:
    CubeShape(nn::gfx::util::PrimitiveShapeFormat, nn::gfx::PrimitiveTopology);
    CalculateVertexCount();
    CalculateIndexCount();
    ~CubeShape();
    CalculateVertexBuffer();
    CalculateImpl(void*, unsigned long, void*, unsigned long);
    CalculateIndexBuffer<unsigned char>();
    CalculateIndexBuffer<unsigned short>();
    CalculateIndexBuffer<unsigned int>();
};

} } } 
