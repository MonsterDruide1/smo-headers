#pragma once

namespace eui { 

class MassDrawPane
{
public:
    MassDrawPane(unsigned char);
    MassDrawPane(nn::ui2d::TextureInfo const&);
    MassDrawPane(nn::ui2d::ResPicture const*, nn::ui2d::ResPicture const*, nn::ui2d::BuildArgSet const&);
    MassDrawPane(eui::MassDrawPane const&);
    initialize(sead::Heap*, int);
    Calculate(nn::ui2d::DrawInfo&, nn::ui2d::Pane::CalculateContext&, bool);
    DrawSelf(nn::ui2d::DrawInfo&, nn::gfx::TCommandBuffer<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >&);
    initializeTextureData_();
    ~MassDrawPane();
    GetRuntimeTypeInfo() const;
    GetRuntimeTypeInfoStatic();
};

} 
