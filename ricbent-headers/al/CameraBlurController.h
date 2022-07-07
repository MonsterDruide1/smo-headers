#pragma once

namespace al { 

class CameraBlurController
{
public:
    CameraBlurController(al::ShaderHolder*, al::PlayerHolder const*, al::SceneCameraInfo const*);
    ~CameraBlurController();
    initProjectResource();
    tryFindBlurParam(char const*) const;
    endInit();
    clearRequest();
    update();
    draw(agl::DrawContext*, agl::RenderBuffer const&) const;
    isEnable() const;
    drawBlurMap(agl::DrawContext*, agl::TextureData const&) const;
    freeBlurMap() const;
    setupCompose(agl::DrawContext*, agl::ShaderProgram const*);
    setBlurParam(char const*);
    invalidate();
    validate();
    invalidateBySystem();
    validateBySystem();
};

} 
