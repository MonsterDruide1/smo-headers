#pragma once

namespace agl { namespace g3d { 

class ModelShaderSampler
{
public:
    ModelShaderSampler();
    clear();
    bind(nn::g3d::ResMaterial const*, nn::g3d::ResShadingModel const*, nn::g3d::ResShaderProgram const*);
    pushBackSampler(int, agl::SamplerLocation const&);
    getResSamplerName(int) const;
    activate(agl::DrawContext*, nn::g3d::MaterialObj const*) const;
    activate(agl::DrawContext*, nn::g3d::MaterialObj const*, nn::gfx::ResTexture const**) const;
    activate(agl::DrawContext*, nn::g3d::ResMaterial const*) const;
    isEqual(agl::g3d::ModelShaderSampler const&) const;
};

} } 
