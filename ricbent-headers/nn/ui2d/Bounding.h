#pragma once

namespace nn { namespace ui2d { 

class Bounding
{
public:
    Bounding(nn::ui2d::ResBounding const*, nn::ui2d::ResBounding const*, nn::ui2d::BuildArgSet const&);
    Bounding(nn::ui2d::Bounding const&);
    ~Bounding();
    DrawSelf(nn::ui2d::DrawInfo&, nn::gfx::TCommandBuffer<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >&);
    CompareCopiedInstanceTest(nn::ui2d::Bounding const&) const;
    GetRuntimeTypeInfo() const;
};

} } 
