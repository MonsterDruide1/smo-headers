#pragma once

namespace agl { namespace sdw { 

class ShadowFrustum
{
public:
    ShadowFrustum();
    initialize(sead::Heap*);
    clipByFrustum(sead::Matrix44<float> const&);
    clipByBoundBox(sead::BoundBox3<float> const&, sead::Matrix44<float> const&, sead::BitFlag<unsigned char>);
    clipByBoundBox(sead::BoundBox3<float> const&, sead::Matrix34<float> const&, sead::BitFlag<unsigned char>);
    clipByBoundBox_(sead::Vector3<float> const*, sead::BitFlag<unsigned char>);
    clipByPlane(sead::Plane3<float> const&);
    findCameraNearPoint(sead::Matrix34<float>);
    clipPointByPlane_(agl::sdw::ShadowFrustum::Polygon*, agl::sdw::ShadowFrustum::Polygon*, agl::sdw::ShadowFrustum::Polygon const&, sead::Plane3<float> const&);
    appendIntersectionPoint(agl::sdw::ShadowFrustum::Polytope*);
    findSamePointAndSwapFromInter(sead::Vector3<float> const&);
    findSamePointFromPolygon(agl::sdw::ShadowFrustum::Polygon const&, sead::Vector3<float> const&);
    resetPolytope();
    updateByViewFrustum(sead::Matrix34<float> const&, sead::Matrix44<float> const&, float, float);
    expandBoundBox(sead::BoundBox3<float>*, sead::Matrix44<float> const&) const;
    expandBoundBox(sead::BoundBox3<float>*, sead::Matrix44<float> const&, sead::Matrix34<float> const&) const;
    expandBoundBox(sead::BoundBox3<float>*, sead::Matrix44<float> const&, sead::Matrix44<float> const&) const;
    expandBoundBox(sead::BoundBox3<float>*, sead::Matrix34<float> const&, sead::Matrix44<float> const&) const;
    expandBoundBox(sead::BoundBox3<float>*, sead::Matrix34<float> const&) const;
    drawFrustum(agl::DrawContext*, sead::Matrix34<float> const&, sead::Matrix44<float> const&, sead::Color4f const&) const;
};

} } 
