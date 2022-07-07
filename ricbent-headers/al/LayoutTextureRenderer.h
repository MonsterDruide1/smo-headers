#pragma once

namespace al { 

class LayoutTextureRenderer
{
public:
    LayoutTextureRenderer();
    ~LayoutTextureRenderer();
    addRenderObj(al::LayoutTextureRenderObj*);
    drawToTexture() const;
    getSceneObjName() const;
};

} 
