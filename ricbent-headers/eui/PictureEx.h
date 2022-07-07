#pragma once

namespace eui { 

class PictureEx
{
public:
    GetRuntimeTypeInfoStatic();
    PictureEx(unsigned char);
    setupForSingleTexture_();
    initializeVertexColor_();
    PictureEx(nn::ui2d::TextureInfo const&);
    PictureEx(nn::ui2d::ResPicture const*, nn::ui2d::ResPicture const*, nn::ui2d::BuildArgSet const&);
    PictureEx(eui::PictureEx const&);
    ~PictureEx();
    GetRuntimeTypeInfo() const;
};

} 
