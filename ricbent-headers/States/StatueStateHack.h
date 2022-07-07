#pragma once

class StatueStateHack
{
public:
    StatueStateHack(Statue*, IUsePlayerHack**);
    appear();
    kill();
    attackSensor(al::HitSensor*, al::HitSensor*);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    control();
    isSwingDash() const;
    isEndCancel() const;
    isEndCancelGround() const;
    isEndCancelAir() const;
    isEndDamage() const;
    updateCollider();
    updateMaterialCode();
    exeWait();
    exeJump();
    exeLand();
    exeSnapPosition();
    ~StatueStateHack();
    getPlayerCollider() const;
};
