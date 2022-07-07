#pragma once

namespace Statue {

init(al::ActorInitInfo const&);
control();
updateCollider();
startHack(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
updateGround();
attackSensor(al::HitSensor*, al::HitSensor*);
receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
exeWait();
exeFall();
exeTrampled();
exeHackStart();
exeHack();
exeHackEndGround();
exeHackEndAir();
exeHackEndLand();
exeRevive();
exeTrampleReflect();

} 
