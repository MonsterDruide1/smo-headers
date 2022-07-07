#pragma once

class KoopaPartialAnimator
{
public:
    KoopaPartialAnimator(Koopa*, int, int, int);
    init(al::ActorInitInfo const&);
    appear();
    update(IUsePlayerHack const*, float, bool);
    attackSensor(al::HitSensor*, al::HitSensor*);
    tryGetPartialAnimName() const;
    isPlayingAnyAnim() const;
    isValidPunchTargetTurn() const;
    isPunch() const;
    isPunchJust() const;
    isPunchSequence() const;
    isFireCharge() const;
    isFireShootJust() const;
    tryStartAttack();
    stop();
    exeNone();
    exePunchStart();
    startPartialAnim(char const*);
    endPunchStart();
    exePunch();
    clear();
    endPunch();
    exeFireChargeStart();
    trySwitchPartialAnimByBaseAction(char const*);
    exeFireCharge();
    endFireCharge();
    exeFireStart();
    exeFireEnd();
    ~KoopaPartialAnimator();
};
