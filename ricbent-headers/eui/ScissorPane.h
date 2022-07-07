#pragma once

namespace eui { 

class ScissorPane
{
public:
    ScissorPane();
    ScissorPane(nn::ui2d::ResPane const*, nn::ui2d::BuildArgSet const&);
    ScissorPane(eui::ScissorPane const&);
    Draw(nn::ui2d::DrawInfo&, nn::gfx::TCommandBuffer<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >&);
    ~ScissorPane();
    GetRuntimeTypeInfo() const;
};

} 
