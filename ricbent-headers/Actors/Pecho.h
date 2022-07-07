#pragma once

class Pecho
{
public:
    Pecho(char const*);
    init(al::ActorInitInfo const&);
    attackSensor(al::HitSensor*, al::HitSensor*);
    isEnablePush() const;
    isEnableAttack() const;
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    isEnableCap() const;
    startLiquidFast();
    startLiquid();
    startLiquidCap();
    control();
    exeAppear();
    exeAttackSuccess();
    updateVelocity();
    exeWait();
    tryStartFind();
    exeFind();
    exeMove();
    exeLiquidSign();
    exeLiquidStart();
    updateVelocityEscapeWallAndFall(float, float);
    exeLiquid();
    exeLiquidEnd();
    exeReset();
    isEnableSendPechoSpot() const;
};
