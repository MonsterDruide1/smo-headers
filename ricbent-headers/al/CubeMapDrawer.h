#pragma once

namespace al { 

class CubeMapDrawer
{
public:
    getCubeMapRenderBuffer() const;
    getViewMatrix() const;
    getProjMatrix() const;
    getCamera() const;
    getProjection() const;
    getFovy() const;
    getAspect() const;
    getModelEnv() const;
    CubeMapDrawer(agl::DrawContext*, al::CubeMapDrawInfo*, agl::env::CubeMap*, int, float, float, sead::Vector3<float> const&, int, bool);
    CubeMapDrawer(agl::DrawContext*, al::CubeMapDrawInfo*, al::TextureUnit*, agl::RenderBuffer*, int, float, float, sead::Vector3<float> const&, int, bool);
    ~CubeMapDrawer();
};

} 
