#pragma once

namespace MoonRock {

init(al::ActorInitInfo const&);
initAfterPlacement();
makeActorAlive();
kill();
isFirstDemo() const;
isEnableSkipDemo() const;
skipDemo();
movement();
calcAnim();
getGoalMarkForCapTalk() const;
attackSensor(al::HitSensor*, al::HitSensor*);
receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
exeWait();
exeReaction();
exeBreak();
exeReadyRequestStartDemoMoonSetStart();
exeRequestStartDemoMoonSetStart();
exeDemoMoonSetStart();
exeEndDemoMoonSetStart();
exeChangeScene();

} 
