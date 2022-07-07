#pragma once

class RaceManRace
{
public:
    RaceManRace(char const*);
    init(al::ActorInitInfo const&);
    attackSensor(al::HitSensor*, al::HitSensor*);
    startCountDown();
    startRace();
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    receiveEvent(al::EventFlowEventData const*);
    trySetRaceManStep(int);
    checkGoalRaceMan();
    control();
    exeStartWait();
    calcRank() const;
    getAttachedGoalActorNum() const;
    getPlayerRankResult() const;
    isGoalPlayer() const;
    isGoalNpc(sead::Vector3<float>*) const;
    onGoalPlayer(bool);
    onGoalNpc(sead::Vector3<float> const&);
    exeRace();
    exeGoalNpcLoseWait();
    exeGoalNpcWin();
    exeGoalNpcWinPlayerGoal();
    startRetry();
    exeStartRetry();
    exeEventRetry();
    exeWaitReEnterStage();
    isWaitReEnterStage() const;
    exeWaitEndStage();
    isWaitEndStage() const;
    attachDemoPlayerToGoal();
    exeAttachJumpPlayer();
    exeAttachJumpPlayerEnd();
    exeResultTurn();
    exeResult();
    calcRaceTimeCsec(int) const;
    getSceneObjName() const;
    ~RaceManRace();
};
