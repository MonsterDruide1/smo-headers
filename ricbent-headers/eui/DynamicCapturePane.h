#pragma once

namespace eui { 

class DynamicCapturePane
{
public:
    DynamicCapturePane(nn::ui2d::ResPane const*, nn::ui2d::BuildArgSet const&);
    initialize_(eui::LayoutEx*);
    DynamicCapturePane(eui::DynamicCapturePane const&, eui::LayoutEx*);
    ~DynamicCapturePane();
    Calculate(nn::ui2d::DrawInfo&, nn::ui2d::Pane::CalculateContext&, bool);
    Draw(nn::ui2d::DrawInfo&, nn::gfx::TCommandBuffer<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >&);
    freeDynamicTexture();
    applyTextureInfoToMaterialForCalculate(nn::ui2d::Pane*, nn::ui2d::Size const&, int);
    GetRuntimeTypeInfo() const;
};

} 
