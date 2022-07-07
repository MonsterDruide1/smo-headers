#pragma once

namespace al { 

class RainTextureKeeper
{
public:
    RainTextureKeeper(al::GraphicsSystemInfo*);
    endInit();
    clearRequest();
    update();
    getCurrentParam();
    requestParam(int, int, al::RainTextureParam const&);
    activateTexture(agl::DrawContext*) const;
    setRainControl(float);
    getCurrentParam() const;
};

} 
