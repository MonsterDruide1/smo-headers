#pragma once

namespace Bull {

getSensorNameSendAttack();
init(al::ActorInitInfo const&);
switchOn();
control();
deathAndReset();
updateCollider();
exeNoStart();
exeWait();
exeTurn();
exeFind();
exeChase();
endChase();
exeBrake();
exeClash();
exeAttack();
exeFall();
exeDamageCap();
exeTrampled();
exeTrampledEnd();
exeAngry();
exePressDown();
exeBlowDown();
exeSwoon();
exeReset();
exeRevive();
exeReviveAppear();
exeHack();
attackSensor(al::HitSensor*, al::HitSensor*);
receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
startHack(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
tryReceiveMsgTrample(al::SensorMsg const*, al::HitSensor const*, al::HitSensor const*);

} 
