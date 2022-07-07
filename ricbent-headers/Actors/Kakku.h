#pragma once

class Kakku
{
public:
    Kakku(char const*);
    init(al::ActorInitInfo const&);
    startActionCapOff();
    initAfterPlacement();
    control();
    attackSensor(al::HitSensor*, al::HitSensor*);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    updateCollider();
    exeAppearStart();
    exeWait();
    trySlide();
    endWait();
    exeFall();
    endFall();
    exeSlide();
    exeJumpEnd();
    exeReaction();
    exeReactionTrample();
    exeReviveInsideScreen();
    exeWaitHack();
    exeWaitHackFall();
    exeHackStart();
    exeHackWalk();
    trySlideHack();
    tryJumpByFloorCode();
    exeHackJump();
    exeHackFall();
    resetUpVec(float);
    exeHackLand();
    exeHackGlide();
    endHackGlide();
    exeHackSlide();
    exeSandGeyser();
    exeHackBlowStartByJoku();
    updateBlow();
    exeHackBlowLoopByJoku();
    getPlayerCollider() const;
};
