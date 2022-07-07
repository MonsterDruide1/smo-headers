#pragma once

namespace nn { namespace gfx { namespace util { 

class QuadShape
{
public:
    ~QuadShape();
    QuadShape(nn::gfx::util::PrimitiveShapeFormat, nn::gfx::PrimitiveTopology);
    CalculateVertexCount();
    CalculateIndexCount();
    CalculateVertexBuffer();
    CalculateImpl(void*, unsigned long, void*, unsigned long);
};

} } } 
