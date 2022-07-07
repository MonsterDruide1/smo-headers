#pragma once

namespace al { 

class DepthShadowMapCtrl
{
public:
    DepthShadowMapCtrl(al::Resource const*);
    ~DepthShadowMapCtrl();
    init(al::LiveActor*, al::ByamlIter const&);
    appendDepthShadowMapInfo(char const*, int, int, int, float, bool, sead::Vector3<float> const&, bool, sead::Vector3<float> const&, sead::Vector3<float> const&, bool, char const*, int, bool, float, float, float, bool, bool, float, int, bool, bool, float);
    initWithoutIter(al::LiveActor*, int);
    initAfterPlacement(al::GraphicsSystemInfo*);
    update();
    updateShapeVisible(al::LiveActor const*);
    actorModelDrawDepth() const;
    actorModelDrawMask() const;
    show();
    hide();
    tryFindDepthShadowMapInfo(char const*) const;
    getDepthShadowMapInfo(int) const;
    getDepthShadowMapNum() const;
};

} 
