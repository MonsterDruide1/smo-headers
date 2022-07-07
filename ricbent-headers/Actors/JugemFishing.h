#pragma once

class JugemFishing
{
public:
    JugemFishing(char const*);
    init(al::ActorInitInfo const&);
    initAfterPlacement();
    kill();
    control();
    updateCollider();
    calcAnim();
    attackSensor(al::HitSensor*, al::HitSensor*);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    receiveEvent(al::EventFlowEventData const*);
    exeFreeze();
    exeWait();
    exeFishingStart();
    exeFishing();
    exeFishingEnd();
    exeReaction();
    exeHackStart();
    exeHackWait();
    exeHackTurnPoint();
    exeHackMove();
    exeHackFishingStart();
    exeHackFishing();
    exeHackFishingSign();
    endHackFishingSign();
    exeHackFishingEnd();
    exeHackFishingPullInOut();
    endHackFishingPullInOut();
    exeHackFishingFailure();
    exeHackFishingSuccessStart();
    exeHackFishingSuccessStartImmediately();
    exeHackFishingSuccess();
    exeHackFishingSuccessWithFishEventDemo();
    exeHackFishingSuccessWithFishEventDemoAfter();
    exeHackEnd();
    exeHackEndAfter1();
    exeHackEndAfter2();
};
