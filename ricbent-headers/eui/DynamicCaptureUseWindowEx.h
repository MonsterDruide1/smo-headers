#pragma once

namespace eui { 

class DynamicCaptureUseWindowEx
{
public:
    DynamicCaptureUseWindowEx(unsigned char, unsigned char);
    DynamicCaptureUseWindowEx(nn::ui2d::ResWindow const*, nn::ui2d::ResWindow const*, nn::ui2d::BuildArgSet const&);
    DynamicCaptureUseWindowEx(eui::DynamicCaptureUseWindowEx const&);
    setupDynamicCapture(eui::DynamicCapturePane*, unsigned char);
    Calculate(nn::ui2d::DrawInfo&, nn::ui2d::Pane::CalculateContext&, bool);
    DrawSelf(nn::ui2d::DrawInfo&, nn::gfx::TCommandBuffer<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >&);
    ~DynamicCaptureUseWindowEx();
    GetRuntimeTypeInfo() const;
    GetRuntimeTypeInfoStatic();
};

} 
