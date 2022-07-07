#pragma once

class StageSceneStateTimeBalloonNew
{
public:
    StageSceneStateTimeBalloonNew(StageScene*, TimeBalloonNpc*, IBalloonFindSequenceInfo*, al::ActorInitInfo const&, StageSceneStateStageMap*, StageSceneStateWarp*, StageSceneStateMiss*, StageSceneLayout*, MiniGameMenu*, IUseDataStoreConnector*);
    appear();
    exeWait();
    exeDemo();
    exeDemoCoin();
    exePlayGetSelect();
    exePlayGetSelectWait();
    exePlayGet();
    exePlayGetSuccess();
    exePlayGetFailure();
    exePlayGetFailureViewAround();
    exePlayGetEnd();
    exePlaySet();
    exePlaySetConfirm();
    exePlaySetTimeUp();
    exeShowAchievement();
    isAutoStart() const;
    isMissNerve() const;
    isTimeBalloonNerve() const;
    isReturnNervePlay() const;
    isDemoNerve() const;
    isDrawForward() const;
    isAutoStartPlayGet() const;
    isAutoStartPlaySet() const;
    receiveEventString(char const*);
    isNerveDemoCoin() const;
    receiveEvent(al::EventFlowEventData const*);
    judgeQuery(char const*) const;
    updateEventFlow();
    jumpToTimeBalloonScenario(TimeBalloonUtil::EEntryId);
    backFromTimeBalloonScenario(TimeBalloonUtil::EEntryId);
    restart(TimeBalloonUtil::EEntryId, bool);
    updateNormal();
    updateDemoWithPlayer();
    updateDemo();
    isInTutorial() const;
    isCoinEnough() const;
    ~StageSceneStateTimeBalloonNew();
};
