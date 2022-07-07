#pragma once

namespace al { 

class FarClear
{
public:
    FarClear();
    ~FarClear();
    drawFarClear(agl::DrawContext*, bool, sead::Color4f const&) const;
    drawFarClearGBuffer(agl::DrawContext*, al::GBufferArray*) const;
};

} 
