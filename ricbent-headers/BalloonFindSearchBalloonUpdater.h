#pragma once

class BalloonFindSearchBalloonUpdater
{
public:
    BalloonFindSearchBalloonUpdater(al::DataStoreDirector*);
    start(unsigned long, unsigned long, bool);
    reset();
    isEndSuccess() const;
    isEndFailure() const;
    exeUpdate();
    getDataStoreDirector() const;
    ~BalloonFindSearchBalloonUpdater();
};
