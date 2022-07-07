#pragma once

namespace KaronWing {

init(al::ActorInitInfo const&);
control();
updateCollider();
attackSensor(al::HitSensor*, al::HitSensor*);
receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
exeWait();
exeWander();
exeTurn();
exeFind();
exeChase();
exeRevive();
exeReviveAppear();
exeAttack();
exeSwoon();
exeBreak();
exeHackStart();
exeHack();
exeDamageCap();

} 
