#pragma once

namespace al { 

class PointSpriteCursor
{
public:
    PointSpriteCursor(char const*, unsigned long, char const*, al::PointSpriteCursor::DrawType);
    ~PointSpriteCursor();
    clear();
    beginStore();
    store(sead::Vector3<float> const&, float, sead::Color4f const&, float, float, bool, bool);
    endStore();
    drawPointSprite(al::GraphicsRenderInfo const&, agl::ShaderProgram const*, sead::GraphicsContextMRT const*) const;
};

} 
