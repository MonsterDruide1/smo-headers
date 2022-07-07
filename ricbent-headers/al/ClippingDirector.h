#pragma once

namespace al { 

class ClippingDirector
{
public:
    ClippingDirector(int, al::AreaObjDirector const*, al::PlayerHolder const*, al::SceneCameraInfo const*);
    ~ClippingDirector();
    endInit(al::AreaObjDirector const*);
    setDefaultFarClipDistance(float);
    setDefaultFarClipDistanceSub(float);
    getFarClipDistance() const;
    registerActor(al::LiveActor*, al::ViewIdHolder const*);
    addToGroupClipping(al::LiveActor*, al::ActorInitInfo const&);
    onGroupClipping(al::LiveActor*);
    offGroupClipping(al::LiveActor*);
    execute();
    startCheckViewCtrlByCameraPos();
    startCheckViewCtrlByLookAtPos();
    startCheckViewCtrlByPlayerPos();
};

} 
