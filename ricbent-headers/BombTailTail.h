#pragma once

class BombTailTail
{
public:
    BombTailTail();
    initTail(al::ActorInitInfo const&, al::LiveActor*, char const*, int);
    calcAnim();
    updateDepthShadowMap();
    endClipped();
    control();
    attackSensor(al::HitSensor*, al::HitSensor*);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    startBattle();
    endBattle();
    reset();
    startThrow(BombTailBomb*);
    endThrow(bool);
    tryStartBounce();
    updateBounce(sead::Matrix34<float> const&, float);
    hitBounce();
    startResetAttack();
    onAnimDynamics();
    offAnimDynamics();
    getControlTopJointMtx() const;
    calcTailLength() const;
    exeBeforeBattleStart();
    exeFollow();
    exeThrow();
    exeReturn();
    exeBounce();
    exeReflect();
};
