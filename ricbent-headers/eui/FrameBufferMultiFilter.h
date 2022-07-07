#pragma once

namespace eui { 

class FrameBufferMultiFilter
{
public:
    FrameBufferMultiFilter();
    ~FrameBufferMultiFilter();
    initialize(sead::Heap*, nn::ui2d::Pane const&, eui::LayoutEx*);
    captureAndFilter(nn::ui2d::Pane const&, eui::DrawInfoEx&);
    applyTextureDataToPictureMaterial(eui::PictureEx*, nn::ui2d::TextureInfo*, agl::TextureData const*, eui::DrawInfoEx const&);
    applyTextureDataToWindowMaterial(eui::WindowEx*, nn::ui2d::TextureInfo*, agl::TextureData const*, eui::DrawInfoEx const&);
    freeResultTexture(agl::TextureData const*);
};

} 
