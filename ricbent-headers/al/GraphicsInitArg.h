#pragma once

namespace al { 

class GraphicsInitArg
{
public:
    GraphicsInitArg(agl::DrawContext*, sead::FrameBuffer*);
    isUsingCubeMapAtmosScatter() const;
    getAtmosScatterViewNum() const;
};

} 
