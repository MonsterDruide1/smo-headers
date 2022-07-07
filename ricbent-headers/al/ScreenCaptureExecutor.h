#pragma once

namespace al { 

class ScreenCaptureExecutor
{
public:
    ScreenCaptureExecutor(int);
    ~ScreenCaptureExecutor();
    createScreenCapture(int, int, int);
    tryCaptureAndDraw(agl::DrawContext*, agl::RenderBuffer const*, int);
    isDraw(int) const;
    draw(agl::DrawContext*, agl::RenderBuffer const*, int) const;
    tryCapture(agl::DrawContext*, agl::RenderBuffer const*, int);
    requestCapture(bool, int);
    onDraw(int);
    offDraw(int);
    offDraw();
};

} 
