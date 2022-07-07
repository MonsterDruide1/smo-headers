#pragma once

namespace SessionMayorNpc {

init(al::ActorInitInfo const&);
movement();
initIntroductionCamera(al::ActorInitInfo const&, sead::PtrArray<SessionMusicianNpc>*);
attackSensor(al::HitSensor*, al::HitSensor*);
receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
tryAppearMemberMusicians();
receiveEvent(al::EventFlowEventData const*);
exeWait();
exeReaction();

} 
