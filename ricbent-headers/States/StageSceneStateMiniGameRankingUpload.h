#pragma once

class StageSceneStateMiniGameRankingUpload
{
public:
    StageSceneStateMiniGameRankingUpload(al::Scene*, al::ActorInitInfo const&, al::LayoutInitInfo const&);
    ~StageSceneStateMiniGameRankingUpload();
    appear();
    control();
    isSuccess() const;
    isFailure() const;
    exeWait();
    exeUploadNickname();
    tryStartUploadScore();
    exeUploadScore();
    exeEnd();
};
