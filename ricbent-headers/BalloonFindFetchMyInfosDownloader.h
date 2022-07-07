#pragma once

class BalloonFindFetchMyInfosDownloader
{
public:
    createResultHolder();
    BalloonFindFetchMyInfosDownloader(al::DataStoreDirector*);
    start(nn::nex::DataStoreFetchMyInfosResult*, nn::nex::qVector<unsigned short> const&);
    isEndSuccess() const;
    isEndFailure() const;
    exeDownload();
    printResult(nn::nex::DataStoreFetchMyInfosResult const&);
    getDataStoreDirector() const;
    ~BalloonFindFetchMyInfosDownloader();
};
