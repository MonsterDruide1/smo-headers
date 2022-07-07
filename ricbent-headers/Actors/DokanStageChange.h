#pragma once

class DokanStageChange
{
public:
    DokanStageChange(char const*);
    init(al::ActorInitInfo const&);
    initAfterPlacement();
    appear();
    kill();
    control();
    endClipped();
    attackSensor(al::HitSensor*, al::HitSensor*);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    exeWait();
    exeReadyBind();
    exeIn();
    exeAppear();
    exeOut();
    exeDisappear();
    getActorDimensionKeeper() const;
};
