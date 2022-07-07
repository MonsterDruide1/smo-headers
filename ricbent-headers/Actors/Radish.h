#pragma once

class Radish
{
public:
    Radish(char const*);
    init(al::ActorInitInfo const&);
    initAfterPlacement();
    resetForHide();
    control();
    reset();
    updateCollider();
    attackSensor(al::HitSensor*, al::HitSensor*);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    release(int);
    pull();
    exeHideWait();
    exeHideReaction();
    exePull();
    exePullOut();
    exeWait();
    exeHold();
    exeThrow();
    trySendBoundMsgToSaucePan();
    exeBound();
    exeLand();
    exeSaucePanInNoDemo();
    exeSaucePanIn();
    exeReaction();
    exeBreak();
    exeResetWait();
    exeReset();
};
