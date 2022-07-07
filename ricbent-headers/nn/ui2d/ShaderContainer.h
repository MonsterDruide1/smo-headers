#pragma once

namespace nn { namespace ui2d { 

class ShaderContainer
{
public:
    ~ShaderContainer();
    Finalize(nn::gfx::TDevice<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*);
    RegisterShader(char const*, bool);
    UnregisterShader(nn::ui2d::ShaderInfo*);
    FindShaderByName(char const*) const;
};

} } 
