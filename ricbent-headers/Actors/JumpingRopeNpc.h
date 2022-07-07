#pragma once

class JumpingRopeNpc
{
public:
    JumpingRopeNpc(char const*);
    init(al::ActorInitInfo const&);
    attackSensor(al::HitSensor*, al::HitSensor*);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    tryMiss();
    movement();
    exeStart();
    updateAnim(bool);
    updateRot(bool);
    updateRope();
    checkRopeCollision() const;
    miss();
    isActionEnd() const;
    exeWait();
    restoreInterval();
    isEnableDisplayBalloon() const;
    interrupt();
    exeJump();
    searchNearestNode();
    endJump();
    exeMiss();
    startResultAction();
    startResultMessage();
    tryStartResultLoopAction();
    isPlayerOff() const;
    exeInterrupt();
    exeTryAgain();
    startReactionPartner();
    control();
    calcRopePos(sead::Vector3<float>*, int, float) const;
    getBest() const;
    setBest(int);
    setBestToday(int);
    getBestToday() const;
    isNerveJump() const;
    isNerveMiss() const;
};
