#pragma once

namespace agl { namespace cull { 

class OcclusionQueryCylinder
{
public:
    OcclusionQueryCylinder();
    calcGPU(agl::UniformBlock*, int) const;
    isInside_(sead::Vector3<float> const&) const;
    loadTypeData(agl::DrawContext*, agl::UniformBlock const&) const;
    drawIndexStream(agl::DrawContext*, int, agl::UniformBlock const&, int) const;
    checkDerivedRuntimeTypeInfo(sead::RuntimeTypeInfo::Interface const*) const;
    getRuntimeTypeInfo() const;
    getType() const;
    ~OcclusionQueryCylinder();
};

} } 
