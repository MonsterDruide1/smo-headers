#pragma once

class BossRaidRivet
{
public:
    BossRaidRivet(char const*);
    init(al::ActorInitInfo const&);
    setConnect(al::LiveActor*, char const*, sead::Vector3<float> const&, sead::Vector3<float> const&);
    setChainRootConnect(al::LiveActor*, char const*, sead::Vector3<float> const&, sead::Vector3<float> const&);
    createChainAndPopn(al::LiveActor*, al::ActorInitInfo const&);
    calcAnim();
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    isElectric() const;
    isEnableCapKeepLockOn() const;
    isPullOut() const;
    exeDemo();
    exeWait();
    exeElectricSign();
    exeElectric();
    exeElectricEnd();
    exePull();
    exePullOut();
    appearPopn();
    reset();
    startAnim(char const*);
    startElectricSign();
    startElectric();
    endElectric();
    tryAppearPopn();
    tryKillPopn();
    killChain();
    resetChain();
};
