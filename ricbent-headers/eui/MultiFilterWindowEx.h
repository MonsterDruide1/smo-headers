#pragma once

namespace eui { 

class MultiFilterWindowEx
{
public:
    MultiFilterWindowEx(unsigned char, unsigned char);
    MultiFilterWindowEx(nn::ui2d::ResWindow const*, nn::ui2d::ResWindow const*, nn::ui2d::BuildArgSet const&);
    MultiFilterWindowEx(eui::MultiFilterWindowEx const&, eui::LayoutEx*);
    ~MultiFilterWindowEx();
    DrawSelf(nn::ui2d::DrawInfo&, nn::gfx::TCommandBuffer<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >&);
    GetRuntimeTypeInfo() const;
    GetRuntimeTypeInfoStatic();
};

} 
