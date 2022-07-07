#pragma once

namespace al { 

class LightMap
{
public:
    LightMap(al::ShaderHolder const*, al::HdrEncode const*);
    ~LightMap();
    setSphereMapUpdateEveryFrame(sead::Vector3<float> const&);
    initializeTexture(int, int);
    isMappingTypeSphere() const;
    isMappingTypeCube() const;
    calcGpu();
    isEnable() const;
    drawMap(agl::DrawContext*, agl::TextureSampler const*, agl::TextureSampler const*) const;
    calcEnableLightNum() const;
    drawCommon(agl::DrawContext*, bool, agl::TextureSampler const*) const;
    tryCreateComposeMap(char const*, char const*, agl::TextureData const*, int);
    drawComposeMap(agl::DrawContext*) const;
    getTextureSampler() const;
    getComposeTextureSampler(char const*, char const*) const;
    getName() const;
};

} 
