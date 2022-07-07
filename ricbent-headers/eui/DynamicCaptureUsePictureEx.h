#pragma once

namespace eui { 

class DynamicCaptureUsePictureEx
{
public:
    DynamicCaptureUsePictureEx(unsigned char);
    DynamicCaptureUsePictureEx(nn::ui2d::TextureInfo const&);
    DynamicCaptureUsePictureEx(nn::ui2d::ResPicture const*, nn::ui2d::ResPicture const*, nn::ui2d::BuildArgSet const&);
    DynamicCaptureUsePictureEx(eui::DynamicCaptureUsePictureEx const&);
    setupDynamicCapture(eui::DynamicCapturePane*, unsigned char);
    Calculate(nn::ui2d::DrawInfo&, nn::ui2d::Pane::CalculateContext&, bool);
    DrawSelf(nn::ui2d::DrawInfo&, nn::gfx::TCommandBuffer<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >&);
    ~DynamicCaptureUsePictureEx();
    GetRuntimeTypeInfo() const;
    GetRuntimeTypeInfoStatic();
};

} 
