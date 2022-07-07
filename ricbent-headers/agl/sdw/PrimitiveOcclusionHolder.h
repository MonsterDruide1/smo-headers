#pragma once

namespace agl { namespace sdw { 

class PrimitiveOcclusionHolder
{
public:
    tryRegistToHost();
    clearRequest();
    calcView(int);
    drawAo(agl::DrawContext*, int, agl::TextureData const&, agl::TextureData const&) const;
    drawDo(agl::DrawContext*, int, agl::TextureData const&, agl::TextureData const&) const;
    drawDebug(agl::DrawContext*, int) const;
    PrimitiveOcclusionHolder(sead::SafeStringBase<char> const&, agl::sdw::PrimitiveOcclusion*, agl::sdw::PrimitiveOcclusionHolder::CreateArg const&);
    ~PrimitiveOcclusionHolder();
    requestSphereOpp(sead::Vector3<float> const&, sead::Vector3<float> const&, float, float, float, float, agl::sdw::PrimitiveOcclusionHolder::RequestType, sead::Color4f const&);
    genMessage(sead::hostio::Context*);
};

} } 
