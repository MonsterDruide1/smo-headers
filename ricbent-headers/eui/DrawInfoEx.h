#pragma once

namespace eui { 

class DrawInfoEx
{
public:
    freeDynamicTexture();
    applyRenderBufferInfo(eui::DrawInfoEx::RenderBufferInfo const*);
    GetRuntimeTypeInfo() const;
    ~DrawInfoEx();
};

} 
