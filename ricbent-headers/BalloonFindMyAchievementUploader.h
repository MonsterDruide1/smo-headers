#pragma once

class BalloonFindMyAchievementUploader
{
public:
    BalloonFindMyAchievementUploader(al::DataStoreDirector*);
    isEndSuccess() const;
    isEndFailure() const;
    start();
    exeCreateSlot();
    exePerpetuateSlot();
    getDataStoreDirector() const;
    ~BalloonFindMyAchievementUploader();
};
