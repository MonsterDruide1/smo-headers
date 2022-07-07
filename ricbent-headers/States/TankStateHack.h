#pragma once

class TankStateHack
{
public:
    TankStateHack(Tank*, al::ActorInitInfo const&, float*, float*, sead::Vector3<float>*, sead::Quat<float>*, float*);
    appear();
    kill();
    control();
    reset();
    receiveMsgInitCapTargetInfo(al::SensorMsg const*);
    receiveMsgNpcScareByEnemy(al::SensorMsg const*);
    receiveMsgHackStart(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    receiveMsgHackEnd(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    endHack();
    attackSensor(al::HitSensor*, al::HitSensor*);
    exeStartDemo();
    updatePose();
    exeWait();
    updateVelocity(bool);
    updateCamera();
    tryChangeNerveIfTrigerShoot();
    exeMove();
    exeShoot();
    exeShootReload();
    exeFall();
    exeLand();
    forceEndIfHack();
    calcAimCursorLayoutPos(sead::Vector2<float>*) const;
    shoot();
    ~TankStateHack();
};
