#pragma once

namespace al { 

class LayoutTextureRenderObj
{
public:
    LayoutTextureRenderObj(char const*, al::LayoutInitInfo const&, char const*, char const*);
    destroy();
    updateLayout();
    requestRenderTexture();
    drawToTexture() const;
    getName() const;
    getLayoutKeeper() const;
    getLayoutActionKeeper() const;
};

} 
