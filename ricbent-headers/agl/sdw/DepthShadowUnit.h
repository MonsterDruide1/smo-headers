#pragma once

namespace agl { namespace sdw { 

class DepthShadowUnit
{
public:
    DepthShadowUnit();
    convBoundingToLightSpaceDirectional_(sead::BoundBox3<float>*, sead::Sphere<sead::Vector3<float> > const&) const;
    convBoundingToLightSpaceDirectional_(sead::BoundBox3<float>*, sead::BoundBox3<float> const&) const;
    ~DepthShadowUnit();
    initialize(sead::Heap*);
    updateSceneMatrix(agl::sdw::LightMatrix const&, sead::Matrix34<float> const&, sead::Matrix44<float> const&, float, float, float);
    updateShadowViewProjection_(sead::Matrix34<float> const&, agl::sdw::MatrixCalcType, float, float, sead::Vector2<int> const&);
    addCasterClipPlanes_(sead::Matrix34<float> const&, sead::Matrix44<float> const&, sead::Vector3<float> const*, float, float, bool);
    updateDirectionalBoundingIndex_();
    convBoundingToLightSpaceNotDirectional_(sead::BoundBox3<float>*, sead::BoundBox3<float> const&) const;
    convBoundingToLightSpaceNotDirectional_(sead::BoundBox3<float>*, sead::Sphere<sead::Vector3<float> > const&) const;
    convBoundingSphereToBox(sead::BoundBox3<float>*, sead::Sphere<sead::Vector3<float> > const&) const;
    clipByPlane(sead::Plane3<float> const&);
    updatePlaneClipInfo();
    updateShadowMatrix(int, int, float, float);
    adjustTexelStable(float, float) const;
    calcLightSpacePerspectiveMatrix_(sead::Matrix44<float>*, sead::Matrix44<float> const&, sead::Matrix34<float> const&, sead::Matrix34<float> const&, float, float);
    addCasterClipPlane_(sead::Plane3<float> const&);
    addCasterClipPlanesSweepDir_(sead::Vector3<float> const&, sead::Vector3<float> const*, int, sead::Vector3<float> const&);
    drawDebug(agl::DrawContext*, agl::sdw::LightMatrix const&, sead::Matrix34<float> const&, sead::Matrix44<float> const&) const;
    genMessage(sead::hostio::Context*);
    genMessageParameter(sead::hostio::Context*, sead::hostio::Node*);
    genMessageDebugParameter(sead::hostio::Context*, sead::hostio::Node*);
    listenPropertyEvent(sead::hostio::PropertyEvent const*);
    listenPropertyEventParameter(sead::hostio::PropertyEvent const*);
    listenPropertyEventDebugParameter(sead::hostio::PropertyEvent const*);
    scShadowBiasMatrix;
};

} } 
