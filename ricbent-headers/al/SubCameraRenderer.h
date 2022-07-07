#pragma once

namespace al { 

class SubCameraRenderer
{
public:
    SubCameraRenderer(agl::DrawContext*, al::GraphicsSystemInfo*, al::ExecuteDirector*, al::SceneCameraInfo*);
    ~SubCameraRenderer();
    endInit();
    draw(agl::DrawContext*, agl::TextureData const*, agl::TextureData const*, agl::TextureData const*, agl::TextureData const*, agl::RenderTargetDepth const*, bool);
    tryCapture();
    update();
    exeCapture();
    exeCaptureFinish();
    isCaptureFinish() const;
    findCameraSubAreaScreenInfo(sead::Vector3<float> const&) const;
    calcOnScreenPos(sead::Vector3<float>*, sead::Vector3<float> const&) const;
};

} 
