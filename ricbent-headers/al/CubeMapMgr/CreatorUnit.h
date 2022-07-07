#pragma once

namespace al { namespace CubeMapMgr { 

class CreatorUnit
{
public:
    generateMipMap(agl::DrawContext*, unsigned int, unsigned int);
    encodeHDR(agl::DrawContext*, agl::env::CubeMap*, al::CubeMapMgr::ReservedUnit*);
    extractHeadElement(agl::DrawContext*, agl::TextureData*, agl::TextureSampler const&, unsigned int, bool, bool);
    convolveHeadElement(agl::DrawContext*, agl::TextureData*, agl::TextureSampler const&, bool);
    ~CreatorUnit();
};

} } 
