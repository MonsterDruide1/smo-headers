#pragma once

class WaterRoad
{
public:
    WaterRoad(char const*);
    init(al::ActorInitInfo const&);
    onAppear();
    appear();
    movement();
    attackSensor(al::HitSensor*, al::HitSensor*);
    isInSensorAlready(al::HitSensor const*) const;
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    exeWait();
    isNearPlayer() const;
    tryMoveSensorToCapHit();
    exeFlow();
    updateFlow();
    tryGetOff(al::CameraTicket*);
    exeFlowAfter();
    exeRelease();
    exeInvalidateBind();
};
