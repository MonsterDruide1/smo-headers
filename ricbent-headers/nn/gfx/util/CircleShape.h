#pragma once

namespace nn { namespace gfx { namespace util { 

class CircleShape
{
public:
    CircleShape(nn::gfx::util::PrimitiveShapeFormat, nn::gfx::PrimitiveTopology, int);
    CalculateVertexCount();
    CalculateIndexCount();
    ~CircleShape();
    CalculateVertexBuffer();
    CalculateImpl(void*, unsigned long, void*, unsigned long);
};

} } } 
