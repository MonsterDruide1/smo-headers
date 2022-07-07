#pragma once

namespace nn { namespace ui2d { 

class FontRefLink
{
public:
    FontRefLink();
    ~FontRefLink();
    Finalize(nn::gfx::TDevice<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*);
    Set(char const*, nn::font::Font*, bool);
};

} } 
