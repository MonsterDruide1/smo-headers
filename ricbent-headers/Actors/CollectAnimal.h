#pragma once

class CollectAnimal
{
public:
    CollectAnimal(char const*);
    init(al::ActorInitInfo const&);
    appear();
    attackSensor(al::HitSensor*, al::HitSensor*);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    control();
    isAlreadyInTheFence() const;
    isWalkOrWait() const;
    saveInTheFence();
    saveOutTheFence();
    startLandingReaction();
    updateMoveVelocity(float, bool);
    updateMovement();
    updateCliffEscape();
    updateBlendWeightMove(CollectAnimal::AnimBlendType);
    isInFenceArea() const;
    exeAppear();
    exeWait();
    exeTurn();
    exeRun();
    exeWalk();
    endWalk();
    exeFall();
    exeWaitBlowJump();
    exeWaitBlowJumpCapHipDrop();
    exeBlowJump();
    exeLandingRun();
    exeRevive();
    exeSurprisedCactusTouchJump();
    exeSurprisedCactusTouchFall();
    exeRush();
    exeSink();
    endSink();
};
