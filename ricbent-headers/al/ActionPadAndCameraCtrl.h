#pragma once

namespace al { 

class ActionPadAndCameraCtrl
{
public:
    tryCreate(al::LiveActor const*, al::ActorResource const*, sead::Vector3<float> const*, char const*);
    startAction(char const*);
    stopPadRumble(al::ActionPadAndCameraCtrlInfo const*);
    updateCamera(al::ActionPadAndCameraCtrlInfo const*);
    updatePadRumbleSourcePos(al::ActionPadAndCameraCtrlInfo*);
    startPadRumble(al::ActionPadAndCameraCtrlInfo const*);
    update(float, float, float, bool);
    updateCameraLoopShake(al::ActionPadAndCameraCtrlInfo const*);
    notifyActorDead();
    notifyActorStartClipped();
    notifyActorEndClipped();
    ActionPadAndCameraCtrl(al::LiveActor const*, al::ActorResource const*, sead::Vector3<float> const*, char const*);
};

} 
