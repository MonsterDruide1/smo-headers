#pragma once

class ShibakenStatePointChase
{
public:
    ShibakenStatePointChase(char const*, Shibaken*, ShibakenMoveAnimCtrl*, ActorStateReactionBase*);
    appear();
    kill();
    startFirstWait(DigPoint*);
    startChaseRun(DigPoint*);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    isKillByDeathArea() const;
    exeFirstWait();
    exeFindTurn();
    exeFind();
    exePointTurn();
    exeChaseRun();
    exeChaseWalk();
    exeChaseWalkSniff();
    exeChaseFind();
    exeSniff();
    exeJump();
    exeReaction();
    ~ShibakenStatePointChase();
};
