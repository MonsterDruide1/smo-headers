#pragma once

class PlayerEquipmentUser
{
public:
    PlayerEquipmentUser(PlayerInput const*, PlayerModelHolder const*, IPlayerModelChanger const*);
    startEquip(al::HitSensor*, al::HitSensor*, EquipmentInfo const*);
    cancelEquip();
    endEquip();
    noticeDamage();
};
