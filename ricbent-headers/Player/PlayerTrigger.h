#pragma once

class PlayerTrigger
{
public:
    PlayerTrigger();
    set(PlayerTrigger::ECollisionTrigger);
    set(PlayerTrigger::EAttackSensorTrigger);
    set(PlayerTrigger::EActionTrigger);
    set(PlayerTrigger::EReceiveSensorTrigger);
    set(PlayerTrigger::EPreMovementTrigger);
    set(PlayerTrigger::EDemoEndTrigger);
    set(PlayerTrigger::EMaterialChangeTrigger);
    setRecMaterialTrigger(char const*);
    clearCollisionTrigger();
    clearAttackSensorTrigger();
    clearActionTrigger();
    clearReceiveSensorTrigger();
    clearPreMovementTrigger();
    clearDemoEndTrigger();
    clearMaterialChangeTrigger();
    isOn(PlayerTrigger::ECollisionTrigger) const;
    isOn(PlayerTrigger::EAttackSensorTrigger) const;
    isOn(PlayerTrigger::EActionTrigger) const;
    isOn(PlayerTrigger::EReceiveSensorTrigger) const;
    isOn(PlayerTrigger::EPreMovementTrigger) const;
    isOn(PlayerTrigger::EDemoEndTrigger) const;
    isOn(PlayerTrigger::EMaterialChangeTrigger) const;
    isOnUpperPunchHit() const;
    isOnUpperPunchHitToss() const;
    isOnAnyDamage() const;
    isOnDamageFire() const;
    isOnEndHackWithDamage() const;
    isOnNoDamageDown() const;
    isOnSpinMoveCapThrow() const;
    isOnHipDropCancelThrow() const;
    isOnYoshiHackEnd() const;
    isOnCollisionExpandCheck() const;
    tryGetRecMaterialCode(char const**) const;
};
