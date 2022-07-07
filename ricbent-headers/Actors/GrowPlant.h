#pragma once

class GrowPlant
{
public:
    GrowPlant(char const*, float);
    init(al::ActorInitInfo const&);
    makeActorAlive();
    movement();
    control();
    attackSensor(al::HitSensor*, al::HitSensor*);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    exeGrowTop();
    exeGrow();
    tryUpdateGrow();
    exeGrowLoopBefore();
    setTransParts(sead::Vector3<float> const&);
    updateGrowLoop(bool);
    exeGrowLoop();
    exeWaitLoop();
    exeWait();
    endGrow();
    startGrow(sead::Vector3<float> const&);
    growAlready(sead::Vector3<float> const&);
    isPlantEnd() const;
    findLowTransY();
};
