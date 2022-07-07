#pragma once

namespace Frog {

init(al::ActorInitInfo const&);
initAfterPlacement();
control();
die();
updateWaterSurface();
isOnWaterSurface() const;
updateCollider();
attackSensor(al::HitSensor*, al::HitSensor*);
startHack(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
onDynamics();
offDynamics();
updateVelocity();
updateSurfaceTransform();
surfaceJump();
exeAppear();
exeWait();
exeWander();
exeDamageCap();
exeTrampled();
exeWaitHackStart();
exeWaitHackStartSwoon();
exeDemoHackFirst();
exeHackStart();
exeSwoon();
exeHack();
endHack();
exeRevive();
exeReviveAppear();
exeReset();
exeDie();

} 
