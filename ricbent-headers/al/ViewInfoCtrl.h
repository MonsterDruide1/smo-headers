#pragma once

namespace al { 

class ViewInfoCtrl
{
public:
    ViewInfoCtrl(al::PlayerHolder const*, al::SceneCameraInfo const*);
    initActorInfo(al::ClippingActorInfo*);
    initViewCtrlAreaGroup(al::AreaObjGroup const*);
    update();
    startCheckByCameraPos();
    startCheckByLookAtPos();
    startCheckByPlayerPos();
};

} 
