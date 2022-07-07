#pragma once

namespace Senobi {

getStretchJointName();
getStretchSensorNum();
getStretchJointLocalOffset();
init(al::ActorInitInfo const&);
initAfterPlacement();
makeActorDead();
attackSensor(al::HitSensor*, al::HitSensor*);
receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
control();
movement();
calcAnim();
updateCollider();
getStretchRate() const;
rebirth(sead::Vector3<float> const&, sead::Vector3<float> const&);
resetCounter();
exeEnemy();
exeReset();
exeHack();

} 
