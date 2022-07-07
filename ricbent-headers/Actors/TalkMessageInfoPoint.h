#pragma once

class TalkMessageInfoPoint
{
public:
    TalkMessageInfoPoint(char const*);
    init(al::ActorInitInfo const&);
    makeActorAlive();
    makeActorDead();
    initAfterPlacement();
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    exeWait();
    updateWait();
    exeWaitInformationWindow();
    exeWaitDelayInformationWindow();
    exeAppearInformationWindow();
    exeHideInformationWindow();
    isInCameraEyePoint();
    tryCheckCollision(sead::Vector3<float> const&) const;
    getMessageSystem() const;
};
