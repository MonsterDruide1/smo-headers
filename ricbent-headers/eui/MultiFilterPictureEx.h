#pragma once

namespace eui { 

class MultiFilterPictureEx
{
public:
    MultiFilterPictureEx(unsigned char);
    MultiFilterPictureEx(nn::ui2d::ResPicture const*, nn::ui2d::ResPicture const*, nn::ui2d::BuildArgSet const&);
    MultiFilterPictureEx(eui::MultiFilterPictureEx const&, eui::LayoutEx*);
    ~MultiFilterPictureEx();
    DrawSelf(nn::ui2d::DrawInfo&, nn::gfx::TCommandBuffer<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >&);
    GetRuntimeTypeInfo() const;
    GetRuntimeTypeInfoStatic();
};

} 
