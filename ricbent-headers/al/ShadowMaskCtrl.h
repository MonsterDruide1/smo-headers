#pragma once

namespace al { 

class ShadowMaskCtrl
{
public:
    setupShadowMaskSphereParam(al::ShadowMaskSphere*) const;
    setupShadowMaskCylinderParam(al::ShadowMaskCylinder*) const;
    setupShadowMaskCubeParam(al::ShadowMaskCube*) const;
    setupShadowMaskCastOvalCylinderParam(al::ShadowMaskCastOvalCylinder*) const;
    ShadowMaskCtrl(bool);
    initShadowMaskNum(int);
    init(al::LiveActor*, al::ActorInitInfo const&, al::ByamlIter const&);
    findShadowMask(char const*) const;
    show();
    init(al::LiveActor*, int);
    initAfterPlacement();
    hide();
    validate();
    invalidate();
    isHide() const;
    appendShadowMask(al::ShadowMaskBase*);
};

} 
