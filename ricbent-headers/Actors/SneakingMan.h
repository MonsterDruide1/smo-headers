#pragma once

class SneakingMan
{
public:
    SneakingMan(char const*);
    init(al::ActorInitInfo const&);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    attackSensor(al::HitSensor*, al::HitSensor*);
    control();
    adjustPosInMoveRange();
    exeWait();
    setDispScale(float);
    updateDispScaleWaitAnim(int, float);
    updatePadRumble();
    exeWander();
    generateRipple();
    exeFind();
    updateTargetAngleDistByPos();
    exeRunOuter();
    calcPlayerAngle() const;
    exeRunInner();
    exeRunWait();
    exeSwoonStart();
    exeSwoon();
    exeSwoonEnd();
    exeHideStart();
    exeHide();
    stopPadRumble();
    exeHideEnd();
    exePressDown();
    exeDie();
    addSinPosToSide(float, float);
    adjustPosByCollision();
};
