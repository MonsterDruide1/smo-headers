#pragma once

class RadiconCar
{
public:
    RadiconCar(IUsePlayerHack**);
    init(al::ActorInitInfo const&);
    initAfterPlacement();
    makeActorAlive();
    updateEffect();
    attackSensor(al::HitSensor*, al::HitSensor*);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    setTypeRace();
    startHackMove();
    endHackMove();
    isMoving() const;
    isBroken() const;
    tryCancelHack() const;
    updateVelocity();
    exeWait();
    calcAccel(sead::Vector3<float>*, bool);
    calcThrottleInputValue() const;
    calcSteeringInputValue() const;
    exeMove();
    endMoveRun();
    exeMoveAuto();
    endMoveAuto();
    exeReaction();
    exeBreak();
    exeReset();
    exeAppear();
    exeStartHackMove();
};
