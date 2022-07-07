#pragma once

class TimeBalloonPlayLayout
{
public:
    TimeBalloonPlayLayout(al::ActorInitInfo const&, al::LiveActor*, StageSceneLayout*, al::EventFlowExecutor*);
    hideStageSceneLayout();
    appearStageSceneLayoutCoin();
    appearStageSceneLayout();
    startStageSceneLayoutOnlyCoin();
    addCoin(int);
    isCoinCountEnd() const;
    appearRank();
    appearMiniGameLayoutPlayGet();
    appearMiniGameLayoutPlaySet();
    disappearMiniGameLayout();
    appearDistance();
    updateDistance();
    disappearDistance();
    appearTimeUp();
    appearGuideLayoutViewAround();
    disappearGuideLayoutViewAround();
    appearDecideButton();
    updateDecideButton();
    isDecided() const;
    appearCongrats();
    setMsgTagGameTimeSec(int);
    setMsgTagCoinPayFind(int);
    setMsgTagCoinPayFindRetry(int);
    setMsgTagCoinBonus(int);
    setMsgTagCoinReward(int);
    notifyExtension();
    notifyRemainingFrame(unsigned int);
};
