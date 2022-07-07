#pragma once

namespace al { 

class ThunderRenderer
{
public:
    ThunderRenderer(al::GraphicsSystemInfo*, sead::Random*);
    ~ThunderRenderer();
    calcGpu();
    updateAddIndex(bool);
    requestPos(int, float, sead::Vector3<float> const&, sead::Vector3<float> const&, int, sead::Color4f const&);
    requestDir(int, float, sead::Vector3<float> const&, int, sead::Color4f const&);
    requestKeepArc(int, float, void*, sead::Vector3<float> const&, sead::Vector3<float> const&, sead::Color4f const&);
    requestLineLight() const;
    exeWait();
    exeFlushPos();
    exeFlushPosAfter();
    exeFlushDir();
    exeArcBegin();
    exeArcKeep();
    isDraw() const;
    isDrawFar() const;
    isRequestableArc(void*) const;
    draw(agl::DrawContext*, int, al::HdrEncode const*, al::SimpleModelEnv const*, int) const;
};

} 
