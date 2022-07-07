#pragma once

namespace agl { namespace env { 

class CubeMapFilterImportanceGGX
{
public:
    CubeMapFilterImportanceGGX();
    ~CubeMapFilterImportanceGGX();
    calcGPU(sead::Vector3<float> const&);
    generateMipMap(agl::DrawContext*, agl::TextureData const&) const;
    drawGGXFilter(agl::DrawContext*, agl::TextureData const&, bool) const;
    genMessage(sead::hostio::Context*);
    listenPropertyEvent(sead::hostio::PropertyEvent const*);
};

} } 
