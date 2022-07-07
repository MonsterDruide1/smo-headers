#pragma once

namespace nn { namespace ui2d { 

class ShaderRefLink
{
public:
    ShaderRefLink(bool);
    ~ShaderRefLink();
    Finalize(nn::gfx::TDevice<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*);
    SetName(char const*);
};

} } 
