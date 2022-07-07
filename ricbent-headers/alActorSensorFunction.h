#pragma once

namespace alActorSensorFunction {

getSensorKeeper(al::LiveActor const*);
sendMsgSensorToSensor(al::SensorMsg const&, al::HitSensor*, al::HitSensor*);
sendMsgToActorUnusedSensor(al::SensorMsg const&, al::LiveActor*);

} 
