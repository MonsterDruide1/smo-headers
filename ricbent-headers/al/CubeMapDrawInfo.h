#pragma once

namespace al { 

class CubeMapDrawInfo
{
public:
    CubeMapDrawInfo(al::GraphicsSystemInfo const*);
    ~CubeMapDrawInfo();
    preDrawCore(agl::DrawContext*, agl::RenderBuffer*, int, float, float, sead::Vector3<float> const&, int, bool);
    preDrawCubeMapFace(agl::DrawContext*, agl::env::CubeMap*, int, float, float, sead::Vector3<float> const&, int, bool);
    preDrawCubeMapFace(agl::DrawContext*, al::TextureUnit*, agl::RenderBuffer*, int, float, float, sead::Vector3<float> const&, int, bool);
};

} 
