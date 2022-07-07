#pragma once

namespace nn { namespace ui2d { 

class RoundRectShape
{
public:
    RoundRectShape(nn::gfx::util::PrimitiveShapeFormat, nn::gfx::PrimitiveTopology, float, float, unsigned int);
    CalculateVertexCount();
    CalculateIndexCount();
    RoundRectShape(nn::gfx::util::PrimitiveShapeFormat, nn::gfx::PrimitiveTopology);
    ~RoundRectShape();
    CopyParams(nn::ui2d::RoundRectShape const&);
    CalculateVertexBuffer();
    CalculateImpl(void*, unsigned long, void*, unsigned long);
    CalculateIndexBuffer<unsigned char>();
    CalculateIndexBuffer<unsigned short>();
    CalculateIndexBuffer<unsigned int>();
};

} } 
