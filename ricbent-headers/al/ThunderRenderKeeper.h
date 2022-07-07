#pragma once

namespace al { 

class ThunderRenderKeeper
{
public:
    ThunderRenderKeeper(al::GraphicsSystemInfo*);
    ~ThunderRenderKeeper();
    finalize();
    update(al::GraphicsUpdateInfo const&);
    calcGpu(al::GraphicsCalcGpuInfo const&);
    drawForward(al::GraphicsRenderInfo const&, al::RenderVariables const&) const;
    drawCubemap(al::GraphicsRenderInfo const&) const;
    findRequestableThunder(void*) const;
    requestPos(int, float, sead::Vector3<float> const&, sead::Vector3<float> const&, int, sead::Color4f const&);
    requestDir(int, float, sead::Vector3<float> const&, int, sead::Color4f const&);
    requestKeepArc(int, float, void*, sead::Vector3<float> const&, sead::Vector3<float> const&, sead::Color4f const&);
    getName() const;
};

} 
