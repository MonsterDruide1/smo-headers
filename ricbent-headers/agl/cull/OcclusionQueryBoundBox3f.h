#pragma once

namespace agl { namespace cull { 

class OcclusionQueryBoundBox3f
{
public:
    calcGPU(agl::UniformBlock*, int) const;
    loadTypeData(agl::DrawContext*, agl::UniformBlock const&) const;
    drawIndexStream(agl::DrawContext*, int, agl::UniformBlock const&, int) const;
    checkDerivedRuntimeTypeInfo(sead::RuntimeTypeInfo::Interface const*) const;
    getRuntimeTypeInfo() const;
    getType() const;
    ~OcclusionQueryBoundBox3f();
    isInside_(sead::Vector3<float> const&) const;
};

} } 
