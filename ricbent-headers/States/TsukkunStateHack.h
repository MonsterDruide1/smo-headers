#pragma once

class TsukkunStateHack
{
public:
    TsukkunStateHack(Tsukkun*, TsukkunTraceHolder*);
    start(al::HitSensor*, al::HitSensor*);
    appear();
    kill();
    control();
    attackSensor(al::HitSensor*, al::HitSensor*);
    isEnableTrampleAttack() const;
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    exeWaitEnterMario();
    exeHackStart();
    exeGround();
    calcMovePower();
    updateGround();
    exeFall();
    updateAir();
    exeLand();
    exeJump();
    exeBlow();
    exeSpin();
    tryThrust();
    updateAccelAndTurn(bool, bool);
    setNerveNormal();
    exeSpinThrust();
    exeSpinJump();
    exeThrust();
    calcMoveDir(sead::Vector3<float>*, sead::Vector3<float>);
    tryStick();
    trySpinThrust();
    exeThrustLoop();
    exeThrustEnd();
    exeStick();
    prepareStickIfFirstStep(char const*);
    cancelStick();
    updateInputVec();
    updateBend(float);
    trySpin();
    endStick();
    exeStickHole();
    endStickHole();
    exeCancel();
    exeDamage();
    isEndCancel() const;
    isEndDamage() const;
    calcMoveVec(sead::Vector3<float>*, sead::Vector3<float>);
    ~TsukkunStateHack();
};
