#pragma once

namespace al { 

class ModelDrawDisplayList
{
public:
    ModelDrawDisplayList(char const*, al::GpuMemAllocator*, unsigned int, unsigned int);
    ModelDrawDisplayList();
    ~ModelDrawDisplayList();
    invalidate();
    getDisplayList(int) const;
    prepDraw(agl::DrawContext*, al::MeshDrawerTable const*, al::ModelCtrl const* const*, int, int) const;
    callDraw(agl::DrawContext*, al::MeshDrawerTable const*, al::ModelCtrl const* const*, int, int) const;
};

} 
