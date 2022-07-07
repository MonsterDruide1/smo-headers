#pragma once

class Coin
{
public:
    Coin(char const*, bool);
    init(al::ActorInitInfo const&);
    initAfterPlacement();
    tryCreateMtxConnector();
    makeActorAlive();
    endClipped();
    appear();
    control();
    isGot() const;
    appearCirclePlacement();
    appearPopUp();
    appearPopUpWithoutHitReaction();
    appearPopUpVelocity();
    appearAbove();
    appearCountUp();
    appearCountUpFiveCount();
    appearCountUp3(int);
    appearCountUp5(int);
    appearCountUp10(int);
    appearCountUpFixPos10(int);
    appearCoinRail();
    appearCoinChameleon(sead::Vector3<float> const&, sead::Quat<float> const&, sead::Vector3<float> const&);
    appearLimitTime(int);
    appearBlow(sead::Vector3<float> const&, int);
    rotate();
    appearBlowUp(int, int);
    appearBlowUpCommon(int, float, float, int, int);
    appearBlowUpLittle(int, int);
    appearFall(sead::Vector3<float> const&, int);
    appearPlayerDead(sead::Vector3<float> const&, sead::Vector3<float> const&, bool, bool);
    appearPlayerDeadReplace(sead::Vector3<float> const&);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    setShadowDropLength(float);
    get();
    isGotOrRotate() const;
    isWait() const;
    exeAppear();
    exeAppearCoinLead();
    exePopUp();
    exeCountUpDelay();
    exeCountUp();
    exeWait();
    exeWaitOnDemoEnd();
    exeGot();
    exeBlowUpDelay();
};
