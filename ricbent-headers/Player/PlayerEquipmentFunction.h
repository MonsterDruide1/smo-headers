#pragma once

namespace PlayerEquipmentFunction {

isEquipmentNoCapThrow(PlayerEquipmentUser const*);
createEquipmentInfoRocketFlower(al::LiveActor*, int, float);
createEquipmentInfoKoopaCap(al::LiveActor*);
startEquip(al::HitSensor*, al::HitSensor*, EquipmentInfo const*);
endEquip(PlayerEquipmentUser**);
syncEquipVisibility(al::LiveActor*, PlayerEquipmentUser const*);
tryNoticeEquipPlayerDamage(PlayerEquipmentUser*);
isTriggerCapAction(PlayerEquipmentUser const*);
isTriggerSwingLeft(PlayerEquipmentUser const*);
isTriggerSwingRight(PlayerEquipmentUser const*);
isPlayerRolling(PlayerEquipmentUser const*);
isEquipmentForceDash(PlayerEquipmentUser const*);
tryGetEquipmentForceDashInfo(int*, float*, PlayerEquipmentUser const*);

} 
