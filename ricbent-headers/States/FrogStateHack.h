#pragma once

class FrogStateHack
{
public:
    FrogStateHack(Frog*, IUsePlayerHack**);
    appear();
    kill();
    endJump();
    attackSensor(al::HitSensor*, al::HitSensor*);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    isInvalidSurfaceApproach() const;
    control();
    moveWithTurnControl(sead::Vector3<float> const&, float);
    isInputJump() const;
    isInputSwing() const;
    isEndCancel() const;
    isEndDie() const;
    updateWait(sead::Vector3<float> const&, bool);
    exeWait();
    exeJump();
    exeHighJump();
    endHighJump();
    exeTrampleJump();
    endTrampleJump();
    exeFall();
    endFall();
    exeLand();
    updateMoveGround(float, float, sead::Vector3<float> const&, bool);
    exeWalkStartSign();
    exeWalkStart();
    exeWalk();
    exeRun();
    exeTurn();
    exeBrake();
    updateSurfaceWait();
    exeSurfaceWait();
    updateSurfaceSwim(bool);
    exeSurfaceSwim();
    exeSurfaceSwimFast();
    exeSplashdown();
    exeUpperPunch();
    ~FrogStateHack();
};
