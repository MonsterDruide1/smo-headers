#pragma once

class PlayGuideBoard
{
public:
    PlayGuideBoard(char const*);
    init(al::ActorInitInfo const&);
    initAfterPlacement();
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    isCanStartRotate();
    attackSensor(al::HitSensor*, al::HitSensor*);
    exeWait();
    exeEvent();
    exeRotate();
    exeDead();
    getMessageSystem() const;
};
