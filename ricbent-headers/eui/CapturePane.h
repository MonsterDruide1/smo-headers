#pragma once

namespace eui { 

class CapturePane
{
public:
    CapturePane(nn::ui2d::ResPane const*, nn::ui2d::BuildArgSet const&);
    initialize_(eui::LayoutEx*);
    CapturePane(eui::CapturePane const&, eui::LayoutEx*);
    setupClearColor_(sead::Heap*, nn::ui2d::Pane*, eui::LayoutEx*, sead::BitFlag<unsigned char>*);
    setupCaptureOutputAlpha255_(nn::ui2d::Pane*, sead::BitFlag<unsigned char>*);
    setupCaptureOriginalSize_(nn::ui2d::Pane*, sead::BitFlag<unsigned char>*);
    initializeCaptureTextureData_(sead::Heap*, char const*);
    ~CapturePane();
    Calculate(nn::ui2d::DrawInfo&, nn::ui2d::Pane::CalculateContext&, bool);
    Draw(nn::ui2d::DrawInfo&, nn::gfx::TCommandBuffer<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >&);
    drawCapture_(nn::ui2d::Pane*, nn::ui2d::DrawInfo&, sead::BitFlag<unsigned char>*, agl::utl::MultiFilter*, agl::RenderBuffer*, agl::RenderTargetColor*, sead::Color4f*, nn::gfx::TCommandBuffer<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >&);
    GetRuntimeTypeInfo() const;
};

} 
