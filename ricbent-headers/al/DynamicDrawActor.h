#pragma once

namespace al { 

class DynamicDrawActor
{
public:
    DynamicDrawActor(al::ActorInitInfo const&, int, char const*, al::DynamicDrawActor::DrawCategory, bool);
    drawDepthShadow() const;
    draw() const;
    finalize();
    setupHio();
    begin();
    normal(sead::Vector3<float> const&);
    color(sead::Color4f const&);
    texCoord(sead::Vector2<float> const&, int);
    tangent(sead::Vector4<float> const&);
    weight(sead::Vector4<float> const&);
    skinId(sead::Vector4<unsigned int> const&);
    vertex(sead::Vector3<float> const&);
    end();
    beginModify();
    normal(unsigned int, sead::Vector3<float> const&);
    color(unsigned int, sead::Color4f const&);
    texCoord(unsigned int, sead::Vector2<float> const&, int);
    tangent(unsigned int, sead::Vector4<float> const&);
    weight(unsigned int, sead::Vector4<float> const&);
    skinId(unsigned int, sead::Vector4<unsigned int> const&);
    vertex(unsigned int, sead::Vector3<float> const&);
    endModify();
    movement();
};

} 
