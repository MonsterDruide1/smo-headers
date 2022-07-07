#pragma once

class BombTailTailPartsModelUpdater
{
public:
    BombTailTailPartsModelUpdater();
    initPartsFixFileNoRegister(al::LiveActor*, al::LiveActor*, char const*, char const*);
    preCalcAnim();
    updatePose();
    postEndClipped();
    attackSensor(al::HitSensor*, al::HitSensor*);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    offSyncAppearAndHide();
    onSyncAppearAndHide();
};
