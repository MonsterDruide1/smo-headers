#pragma once

namespace SessionMusicianNpc {

init(al::ActorInitInfo const&);
startEvent();
appear();
kill();
attackSensor(al::HitSensor*, al::HitSensor*);
receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
receiveEvent(al::EventFlowEventData const*);
judgeQuery(char const*) const;
endClipped();
control();
forceControlForDance();
controlForDance();
isJoined() const;
isStateWarp() const;
doneWarp();
isEnableMuteBgmTrack() const;
exeWaitNoEventFlowSabi();
exeWaitNoEventFlow();
exeWait();
exeWarpStart();
exeWarp();
exeWarpEnd();
exeReaction();
endReaction();

} 
