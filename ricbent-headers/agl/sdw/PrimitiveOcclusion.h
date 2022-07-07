#pragma once

namespace agl { namespace sdw { 

class PrimitiveOcclusion
{
public:
    PrimitiveOcclusion();
    setShaderSphereAo(agl::ShaderProgram const*);
    setShaderSphereDo(agl::ShaderProgram const*);
    setShaderMakeTableSphereDo(agl::ShaderProgram const*);
    init(sead::Heap*, agl::sdw::PrimitiveOcclusion::CreateArg const&);
    createTexture3D(sead::Heap*);
    clearRequest();
    ~PrimitiveOcclusion();
    tryFindOccHolder(sead::SafeStringBase<char> const&) const;
    tryFindOccHolder(sead::SafeStringBase<char> const&);
    requestSphereOppAo(sead::Vector3<float> const&, float, float, sead::SafeStringBase<char> const&);
    requestSphereOppDo(sead::Vector3<float> const&, sead::Vector3<float> const&, float, float, float, sead::SafeStringBase<char> const&);
    requestSphereOppAoDo(sead::Vector3<float> const&, sead::Vector3<float> const&, float, float, float, float, sead::SafeStringBase<char> const&);
    calcSystemDoConeDegree() const;
    calcDoConeDegree(float) const;
    calcContext(int, sead::Matrix34<float> const&, sead::Projection const&);
    calcContext_(int);
    drawAo(agl::DrawContext*, int, agl::TextureData const&, agl::TextureData const&, sead::SafeStringBase<char> const&) const;
    drawDo(agl::DrawContext*, int, agl::TextureData const&, agl::TextureData const&, sead::SafeStringBase<char> const&) const;
    drawDebug(agl::DrawContext*, int) const;
    drawPrecomputeSphereDo(agl::DrawContext*, int) const;
    getGroupName(unsigned int) const;
    genMessage(sead::hostio::Context*);
    listenPropertyEvent(sead::hostio::PropertyEvent const*);
};

} } 
