#pragma once

class TimeBalloonNotifierDirector
{
public:
    TimeBalloonNotifierDirector(al::LiveActor*, StageSceneLayout*, int*, TimeBalloonNoticeSequenceData*, bool);
    init(al::ActorInitInfo const&, TimeBalloonSequenceInfo*);
    execute();
    exeWait();
    exeDownload();
    requestNotice();
    exeDownloadReady();
    exeNotifyPlayed();
    exeNotifyRankUp();
    exeWaitDownloadProfileDataGot();
    exeNotifyGot();
    exeWaitDownloadProfileDataPlayed();
    exeUpdatePlayed();
    exeEnd();
    exeEndForce();
    exeEndWait();
    startNotifier();
    endNotifier();
    requestDownload();
    getNerveKeeper() const;
};
