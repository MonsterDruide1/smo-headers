#pragma once

namespace al { 

class ShaderEnvTextureKeeper
{
public:
    ShaderEnvTextureKeeper(al::GraphicsSystemInfo*);
    ~ShaderEnvTextureKeeper();
    activateEnvTexture(agl::DrawContext*, al::EnvTexInfo const&, al::ModelAdditionalInfo*, bool, bool) const;
    preDrawGraphics();
    tryActivateIndirectTexture(agl::DrawContext*, agl::SamplerLocation const&);
};

} 
