#pragma once

namespace al { 

class ShaderSamplerSetter
{
public:
    ShaderSamplerSetter(agl::DrawContext*, agl::ShaderProgram const*, agl::TextureSampler const*, char const*, bool);
};

} 
