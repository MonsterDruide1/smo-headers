#pragma once

namespace al { 

class VastGridCulling
{
public:
    VastGridCulling();
    isReady() const;
    setViewProj(sead::Camera const*, al::Projection const*, sead::Camera const*, al::Projection const*, sead::Camera const*, al::Projection const*);
    calcWorldFrustum();
    getCamera() const;
    getProjMtx() const;
    getViewMtxL() const;
    getViewMtxR() const;
    getViewFrustum() const;
};

} 
