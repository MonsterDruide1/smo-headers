#pragma once

class Koopa
{
public:
    Koopa(char const*);
    init(al::ActorInitInfo const&);
    tryStartHackActionIfNotPlaying(char const*, bool);
    initAfterPlacement();
    appear();
    makeActorDead();
    kill();
    movement();
    control();
    calcAnim();
    updateCollider();
    startHackAction(char const*, bool);
    attackSensor(al::HitSensor*, al::HitSensor*);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    exeSwoon();
    exeSwoonReaction();
    exeDemoHackFirst();
    exeStart();
    exeWait();
    endWait();
    exeTurnPoint();
    exeMove();
    exeMoveBrake();
    exeMoveBrakeTurn();
    exeJumpStart();
    exeJump();
    exeJumpEnd();
    exeFall();
    exe2D();
    end2D();
    exeBind();
    exeBindHackStart();
    exeStop();
    exeDead();
    exeDeadFall();
    startBind();
    endBind();
    endBindAndPopUp(sead::Vector3<float> const&);
    hideBindModel();
    resetBindPosition(sead::Vector3<float> const&);
    calcPuppetMoveDir(sead::Vector3<float>*, sead::Vector3<float> const&) const;
    isTriggerSwing() const;
    isBindWait() const;
    changeHackTutorialElectricWire();
    closeHackTutorial();
    changeBind2D();
    changeBindHackStart(sead::Vector3<float> const&, sead::Vector3<float> const&);
    getBindHackStartActionFrame() const;
    getBindHackStartActionFrameMax() const;
    getActorDimensionKeeper() const;
};
