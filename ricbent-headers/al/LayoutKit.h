#pragma once

namespace al { 

class LayoutKit
{
public:
    LayoutKit(al::FontHolder*);
    ~LayoutKit();
    createCameraParamForIcon();
    createExecuteDirector(int);
    createEffectSystem();
    endInit();
    update();
    draw(char const*) const;
    drawList(char const*, char const*) const;
    setLayoutSystem(al::LayoutSystem*);
    setDrawContext(agl::DrawContext*);
};

} 
