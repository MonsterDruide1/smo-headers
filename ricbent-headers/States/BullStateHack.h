#pragma once

class BullStateHack
{
public:
    BullStateHack(Bull*, bool);
    appear();
    kill();
    tryStart(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    attackSensor(al::HitSensor*, al::HitSensor*);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    tryCancelDashCharge();
    control();
    updateCollider();
    isEndCancel() const;
    isEndDamage() const;
    isEndReset() const;
    updateCameraSubTarget();
    exeMove();
    exeHackStart();
    updateChargeOld();
    updateCharge();
    isOnGround() const;
    exeCharge();
    endCharge();
    exeChargeFull();
    exeDash();
    endDash();
    exeClash();
    ~BullStateHack();
    getPlayerCollider() const;
};
