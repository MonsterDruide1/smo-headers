#pragma once

namespace al { 

class ScreenCapture
{
public:
    ScreenCapture(int, int);
    ~ScreenCapture();
    copyImageFromFrameBuffer(agl::DrawContext*, agl::RenderBuffer const*);
    drawCaptureImage(agl::DrawContext*, agl::RenderBuffer const*) const;
};

} 
