#pragma once

class EnemyStateSwoon
{
public:
    EnemyStateSwoon(al::LiveActor*, char const*, char const*, char const*, bool, bool);
    appear();
    control();
    tryReceiveMsgAttack(al::SensorMsg const*);
    tryReceiveMsgStartHack(al::SensorMsg const*);
    tryReceiveMsgEndSwoon(al::SensorMsg const*);
    tryReceiveMsgPressDown(al::SensorMsg const*);
    tryReceiveMsgObjHipDropAll(al::SensorMsg const*);
    tryReceiveMsgTrample(al::SensorMsg const*);
    tryReceiveMsgTrample(al::SensorMsg const*, al::HitSensor const*, al::HitSensor const*);
    tryReceiveMsgTrampleReflect(al::SensorMsg const*);
    tryReceiveMsgTrampleReflect(al::SensorMsg const*, al::HitSensor const*, al::HitSensor const*);
    tryReceiveMsgObjHipDropReflect(al::SensorMsg const*);
    tryReceiveMsgObjLeapFrog(al::SensorMsg const*, al::HitSensor const*, al::HitSensor const*);
    tryReceiveMsgEnableLockOn(al::SensorMsg const*);
    tryReceiveMsgStartLockOn(al::SensorMsg const*);
    requestTrampled();
    initParams(int, char const*);
    initParams(EnemyStateSwoonInitParam const&);
    exeSwoonStart();
    getSwoonStartAnimName() const;
    getSwoonStartLandAnimName() const;
    isOnGroundOrWaterSurface() const;
    exeSwoonStartFall();
    tryStartHitReactionLand();
    exeSwoonStartLand();
    exeSwoonLoop();
    getSwoonLoopAnimName() const;
    isPlayingActionIncorrect() const;
    exeSwoonEndSign();
    exeSwoonEnd();
    getSwoonEndAnimName() const;
    exeSwoonTrampled();
    getSwoonTrampledAnimName() const;
    ~EnemyStateSwoon();
};
