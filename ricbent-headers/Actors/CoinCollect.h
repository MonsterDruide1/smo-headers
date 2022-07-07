#pragma once

class CoinCollect
{
public:
    CoinCollect(char const*);
    init(al::ActorInitInfo const&);
    listenKill();
    listenAppear();
    initAfterPlacement();
    control();
    endClipped();
    appear();
    makeActorAlive();
    getTransForHint() const;
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    appearHelpAmiiboEffect();
    deleteHelpAmiiboEffect();
    reappearHelpAmiiboEffect();
    isEnableHint() const;
    exeWait();
    rotate();
    exeWaitAmiibo();
    exeGot();
    exeCountUp();
    exeBlow();
};
