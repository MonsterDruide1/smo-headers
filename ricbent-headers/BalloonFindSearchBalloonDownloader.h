#pragma once

class BalloonFindSearchBalloonDownloader
{
public:
    createResultHolder();
    BalloonFindSearchBalloonDownloader(al::DataStoreDirector*);
    start(nn::nex::qVector<nn::nex::DataStoreSearchBalloonResultSet>*, unsigned short, unsigned char);
    reset();
    isEndSuccess() const;
    isEndFailure() const;
    exeDownload();
    printResult(nn::nex::qVector<nn::nex::DataStoreSearchBalloonResultSet> const&);
    getDataStoreDirector() const;
    ~BalloonFindSearchBalloonDownloader();
};
