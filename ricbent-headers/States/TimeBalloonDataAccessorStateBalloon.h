#pragma once

class TimeBalloonDataAccessorStateBalloon
{
public:
    TimeBalloonDataAccessorStateBalloon(TimeBalloonDataAccessor*, GameDataHolderAccessor const&);
    startUpdate();
    startCreate();
    settingUpdateBufferQueueGot(unsigned long);
    settingUpdateBufferQueuePlayed(unsigned long);
    startUpdateBufferQueueGot();
    startUpdateBufferQueuePlayed();
    settingCommon(unsigned long, TimeBalloon::BalloonDataServer const*);
    settingForDownload(unsigned long);
    settingForDownloadRating(unsigned long);
    settingForUpdate(unsigned long, TimeBalloon::BalloonDataServer const*);
    settingForCreate(TimeBalloon::BalloonDataServer const*);
    settingForDelete(unsigned long);
    startDownload();
    startDownloadRating();
    startDelete();
    exeDownload();
    exeDownloadRating();
    exeUpdate();
    exeDelete();
    exeCreate();
    exeUpdateBufferQueueGot();
    exeUpdateBufferQueuePlayed();
    getRatingInfo(nn::nex::qMap<signed char, nn::nex::DataStoreRatingInfo>*) const;
    ~TimeBalloonDataAccessorStateBalloon();
};
