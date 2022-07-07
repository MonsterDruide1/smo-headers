#pragma once

namespace agl { namespace cull { 

class OcclusionQuery
{
public:
    OcclusionQuery();
    ~OcclusionQuery();
    initialize(sead::Heap*);
    getZPassCount(unsigned long*) const;
    getZPassCount(unsigned long*, int) const;
    checkDerivedRuntimeTypeInfo(sead::RuntimeTypeInfo::Interface const*) const;
    getRuntimeTypeInfo() const;
    calcGPU(agl::UniformBlock*, int) const;
    isInside_(sead::Vector3<float> const&) const;
    loadTypeData(agl::DrawContext*, agl::UniformBlock const&) const;
    drawIndexStream(agl::DrawContext*, int, agl::UniformBlock const&, int) const;
};

} } 
