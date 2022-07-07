#pragma once

class VolleyballBall
{
public:
    VolleyballBall(char const*);
    init(al::ActorInitInfo const&);
    control();
    attackSensor(al::HitSensor*, al::HitSensor*);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    attack(sead::Vector3<float> const&, sead::Vector3<float> const&, float);
    toss(sead::Vector3<float> const&, sead::Vector3<float> const&);
    reset();
    isMiss() const;
    isReturnEnd() const;
    isTossEnd() const;
    isActive() const;
    isRetry() const;
    isRetryEnd() const;
    exeWait();
    exeAttack();
    exeOnGround();
    endOnGround();
    exeReturn();
    exeReturnSmash();
    exeReturnEnd();
    exeMiss();
    exeMissReaction();
    exeToss();
    exeTossEnd();
    exeRetry();
    exeRetryEnd();
};
