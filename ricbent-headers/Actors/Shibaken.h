#pragma once

class Shibaken
{
public:
    Shibaken(char const*);
    init(al::ActorInitInfo const&);
    initAfterPlacement();
    movement();
    control();
    startClipped();
    updateCollider();
    attackSensor(al::HitSensor*, al::HitSensor*);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    exeSit();
    exeWaitInit();
    exeWait();
    exeWaitFar();
    exeFindTurn();
    exeFind();
    exePlayerChase();
    exePlayerChaseTurn();
    exePointChase();
    exeCapCatch();
    exeBark();
    exeSleepStart();
    exeSleep();
    exeSleepEnd();
    exeJump();
    exeReaction();
    exeReset();
};
