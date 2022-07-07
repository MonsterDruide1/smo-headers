#pragma once

namespace al { 

class SimpleModelEnv
{
public:
    SimpleModelEnv();
    ~SimpleModelEnv();
    initialize(int, al::GraphicsSystemInfo const*, sead::Heap*);
    updateEnv(int, sead::Matrix34<float> const&, sead::Matrix44<float> const&, sead::Vector2<float> const&, sead::Vector2<float> const&, float, float, float, float, float, char const*);
    setPrevViewProjMatrix(sead::Matrix34<float> const&, sead::Matrix44<float> const&);
    prepareModelDraw(int) const;
};

} 
