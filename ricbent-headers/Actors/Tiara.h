#pragma once

class Tiara
{
public:
    Tiara(char const*);
    init(al::ActorInitInfo const&);
    attackSensor(al::HitSensor*, al::HitSensor*);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    tryStartScare();
    tryEndScare();
    startWait();
    startTalk();
    startStop();
    startTurnToHostAndStop(int);
    startStopAction(char const*);
    startFindTurn();
    isEndTurn() const;
    startPeachWorldHomeCastleCapDemo();
    startShakeHandPeachWorldHomeCastleCapDemo();
    endPeachWorldHomeCastleCapDemo();
    exeWait();
    exeTalk();
    exeStop();
    endStop();
    exeReaction();
    exeTurnToHost();
    exeStopToHost();
    exeStopAction();
    exeFindTurn();
    exeShakeHand();
    exeScare();
    exeWaitInitPeachWorldHomeCastleCapDemo();
    exeShakeHandPeachWorldHomeCastleCapDemo();
    exeWaitAfterPeachWorldHomeCastleCapDemo();
};
