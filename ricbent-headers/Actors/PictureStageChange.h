#pragma once

class PictureStageChange
{
public:
    PictureStageChange(char const*);
    init(al::ActorInitInfo const&);
    initAfterPlacement();
    setupOutCamera();
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    isPlayerAtForceBind() const;
    attackSensor(al::HitSensor*, al::HitSensor*);
    isPlayerInBounds() const;
    control();
    exeWait();
    exeBindIn();
    exeBindOut();
};
