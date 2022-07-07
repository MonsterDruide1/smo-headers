#pragma once

namespace al { 

class OrthoRenderer
{
public:
    OrthoRenderer(al::GraphicsSystemInfo*);
    ~OrthoRenderer();
    updateView(sead::LookAtCamera const*, sead::OrthoProjection const*);
};

} 
