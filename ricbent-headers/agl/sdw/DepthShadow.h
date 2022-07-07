#pragma once

namespace agl { namespace sdw { 

class DepthShadow
{
public:
    DepthShadow();
    ~DepthShadow();
    freeShadowMap(bool) const;
    initialize(agl::sdw::DepthShadow::CreateArg const&, sead::Heap*);
    allocShadowMap(agl::DrawContext*) const;
    drawShadowMap(agl::DrawContext*) const;
    copyReducedShadowMap(agl::DrawContext*) const;
    updatePlaneClipInfo();
    updateSceneMatrix(sead::Matrix34<float> const&, sead::Matrix44<float> const&);
    checkAndUpdateWorld_(sead::BoundBox3<float> const&, int, sead::BitFlag<unsigned int>);
    checkAndUpdateWorld_(sead::Sphere<sead::Vector3<float> > const&, int, sead::BitFlag<unsigned int>);
    clipByPlane(sead::Plane3<float> const&);
    updateShadowMatrix();
    drawDebug(agl::DrawContext*, sead::Matrix34<float> const&, sead::Matrix44<float> const&) const;
    genMessage(sead::hostio::Context*);
    genMessageParameter(sead::hostio::Context*, sead::hostio::Node*);
    genMessageDebugParameter(sead::hostio::Context*, sead::hostio::Node*);
    listenPropertyEvent(sead::hostio::PropertyEvent const*);
    listenPropertyEventParameter(sead::hostio::PropertyEvent const*);
    listenPropertyEventDebugParameter(sead::hostio::PropertyEvent const*);
};

} } 
