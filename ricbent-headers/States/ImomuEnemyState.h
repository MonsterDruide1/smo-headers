#pragma once

class ImomuEnemyState
{
public:
    ImomuEnemyState(al::LiveActor*, al::ActorInitInfo const&, ImomuInfo*);
    init();
    appear();
    kill();
    control();
    attackSensor(al::HitSensor*, al::HitSensor*);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    isInvalidReceiveMsg() const;
    isHackPrepare() const;
    resetHackAnim();
    resetHack(bool);
    isEnableUsePlayerPushReceiver() const;
    isResetOrRevive() const;
    exeWait();
    exeExpandSign();
    exeExpand();
    exeShrink();
    tryBlowDown(bool);
    exeShrinkToBody();
    exeShrinkReaction();
    exeWaitHack();
    changeToReset();
    exeWaitHackDirect();
    exeWaitHackStartDemo();
    exeHackStart();
    exeReset();
    resetToFirstKeyPose();
    exeRevive();
    exeReviveAppear();
    exeBlowDown();
    ~ImomuEnemyState();
};
