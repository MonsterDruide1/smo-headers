#pragma once

class StageSceneStateMiniGameRanking
{
public:
    tryCreate(al::Scene*, al::ActorInitInfo const&, al::LayoutInitInfo const&);
    StageSceneStateMiniGameRanking(char const*, al::Scene*, al::ActorInitInfo const&, al::LayoutInitInfo const&);
    tryCreateRankingNpcs(al::ActorInitInfo const&);
    ~StageSceneStateMiniGameRanking();
    init();
    appear();
    tryOpen();
    exeUpload();
    exeWaitEndConfirm();
    exeConnectToInternet();
    exeConnectToInternetNoHandleError();
    exeConnectToInternetNoHandleErrorWait();
    exeWaitEndConfirmToClose();
    exeAppear();
    exeViewRanking();
    updateViewRanking(RankingCategory);
    changeView(RankingCategory, bool);
    updateDownloadRankingData(RankingCategory, al::Nerve const*);
    getRankingType() const;
    control();
    exeChangeView();
    exeDownloadRankingData();
    exeClose();
    exeHandleError();
};
