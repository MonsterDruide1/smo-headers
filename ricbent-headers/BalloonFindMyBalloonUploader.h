#pragma once

class BalloonFindMyBalloonUploader
{
public:
    BalloonFindMyBalloonUploader(al::DataStoreDirector*);
    start(IBalloonFindMyBalloon const*, unsigned short);
    isEndSuccess() const;
    isEndFailure() const;
    exeUpload();
    exeFailure();
    getDataStoreDirector() const;
    ~BalloonFindMyBalloonUploader();
};
