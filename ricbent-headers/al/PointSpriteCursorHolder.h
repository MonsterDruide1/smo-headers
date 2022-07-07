#pragma once

namespace al { 

class PointSpriteCursorHolder
{
public:
    setContextBlend(sead::GraphicsContextMRT*);
    setContextBlendAdd(sead::GraphicsContextMRT*);
    PointSpriteCursorHolder(al::GraphicsSystemInfo*, unsigned long);
    finalize();
    declareUsing(char const*, unsigned long, char const*, al::PointSpriteCursor::DrawType, sead::GraphicsContextMRT const*);
    findExistPointSprite(char const*) const;
    drawForward(al::GraphicsRenderInfo const&, al::RenderVariables const&) const;
    drawLdr(al::GraphicsRenderInfo const&) const;
    update(al::GraphicsUpdateInfo const&);
    calcGpu(al::GraphicsCalcGpuInfo const&);
    getName() const;
};

} 
