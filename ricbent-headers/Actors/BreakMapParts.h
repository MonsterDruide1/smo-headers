#pragma once

namespace BreakMapParts {

init(al::ActorInitInfo const&);
kill();
receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
getJudgeFunction(char const*) const;

} 
