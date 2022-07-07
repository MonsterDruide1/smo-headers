#pragma once

namespace HipDropTransformPartsWatcher {

init(al::ActorInitInfo const&);
receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
tryEmitEffects();

} 
