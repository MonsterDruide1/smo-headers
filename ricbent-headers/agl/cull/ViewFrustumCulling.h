#pragma once

namespace agl { namespace cull { 

class ViewFrustumCulling
{
public:
    isInside(sead::Vector3<float> const&, float) const;
    isInside(sead::Vector3<float> const&, sead::Vector3<float> const&) const;
    operator=(agl::cull::ViewFrustumCulling const&);
    ViewFrustumCulling();
    update(sead::Matrix34<float> const&, sead::Projection const&);
    update(sead::Matrix34<float> const&);
    update_();
    update(sead::Matrix34<float> const&, sead::Matrix44<float> const&, float, float, float, float, sead::Vector2<float> const&);
    update(sead::Matrix44<float> const&, float, float, float, float, sead::Vector2<float> const&);
    update(sead::Projection const&);
};

} } 
