#pragma once

namespace nn { namespace ui2d { 

class TexMap
{
public:
    TexMap();
    ResetSamplerSettings();
    TexMap(nn::ui2d::TextureInfo const*);
    Set(nn::ui2d::TextureInfo const*);
    ~TexMap();
    Finalize();
    SetWrapMode(nn::ui2d::TexWrap, nn::ui2d::TexWrap);
    SetFilter(nn::ui2d::TexFilter, nn::ui2d::TexFilter);
    CopySamplerSettings(nn::ui2d::TexMap const&);
};

} } 
