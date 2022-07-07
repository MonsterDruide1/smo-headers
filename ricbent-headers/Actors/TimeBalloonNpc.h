#pragma once

namespace TimeBalloonNpc {

init(al::ActorInitInfo const&);
initAfterPlacement();
attackSensor(al::HitSensor*, al::HitSensor*);
receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
control();
exeEvent();
exeReaction();
isReaction() const;
exeScared();

} 
