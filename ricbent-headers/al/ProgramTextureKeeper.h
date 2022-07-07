#pragma once

namespace al { 

class ProgramTextureKeeper
{
public:
    ProgramTextureKeeper(al::GraphicsSystemInfo*);
    ~ProgramTextureKeeper();
    endInit();
    clearRequest();
    update();
    requestParam(int, int, al::ProgramTextureParam const&);
    activateRainTexture(agl::DrawContext*) const;
    setEnable(al::ProgramTextureType, bool);
};

} 
