#pragma once

namespace nn { namespace ui2d { 

class TextureRefLink
{
public:
    TextureRefLink(nn::ui2d::TextureInfo*, bool);
    ~TextureRefLink();
    Finalize(nn::gfx::TDevice<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*);
    SetName(char const*);
};

} } 
