#pragma once

namespace RadiconNpc {

init(al::ActorInitInfo const&);
initAfterPlacement();
kill();
attackSensor(al::HitSensor*, al::HitSensor*);
receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
endHack();
control();
exeWait();
exeWaitHack();
exeStartHack();
exeHackWait();
exeHackShake();
exeEndHack();
exeReaction();

} 
