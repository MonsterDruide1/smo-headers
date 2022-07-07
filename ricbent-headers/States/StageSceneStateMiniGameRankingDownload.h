#pragma once

class StageSceneStateMiniGameRankingDownload
{
public:
    StageSceneStateMiniGameRankingDownload(al::Scene*, al::ActorInitInfo const&, al::LayoutInitInfo const&);
    ~StageSceneStateMiniGameRankingDownload();
    isSuccess() const;
    isFailure() const;
    requestDownload(RankingCategory, RankingType);
    exeDownloadFriendsData();
    exeDownloadWorldDataTop();
    exeDownloadWorldDataNear();
    exeEnd();
    exeFailureNotFound();
};
