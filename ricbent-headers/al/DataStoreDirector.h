#pragma once

namespace al { 

class DataStoreDirector
{
public:
    DataStoreDirector();
    ~DataStoreDirector();
    init(nn::nex::Credentials*, int);
    startUpload(void const*, nn::nex::DataStorePreparePostParam const&);
    startUploadMetaBinary(nn::nex::DataStorePreparePostParam const&);
    startUploadMetaBinaryArray(nn::nex::qVector<nn::nex::DataStoreChangeMetaParam> const&);
    tryEndUpload(bool*, unsigned long*);
    startUpdate(void const*, nn::nex::DataStorePrepareUpdateParam const&);
    startUpdateMetaBinary(nn::nex::DataStoreChangeMetaParam const&);
    tryEndUpdate(bool*);
    startDownload(void*, unsigned int, nn::nex::DataStorePrepareGetParam const&);
    startDownloadMeta(nn::nex::DataStoreMetaInfo*, nn::nex::DataStoreGetMetaParam const&);
    startDownloadMetaArray(nn::nex::qVector<nn::nex::DataStoreMetaInfo>*, nn::nex::qVector<nn::nex::DataStoreGetMetaParam> const&);
    tryEndDownload(bool*);
    startSearch(nn::nex::DataStoreSearchParam const&);
    tryEndSearch(bool*, nn::nex::DataStoreSearchResult*);
    startDelete(nn::nex::DataStoreDeleteParam const&);
    startDeleteArray(nn::nex::qVector<nn::nex::DataStoreDeleteParam> const&);
    tryEndDelete(bool*);
    startDownloadRating(nn::nex::DataStoreRatingInfo*, unsigned long, signed char);
    startDownloadRatingArray(nn::nex::qVector<unsigned long> const&, nn::nex::qVector<nn::nex::qMap<signed char, nn::nex::DataStoreRatingInfo> >*);
    tryEndDownloadRating(bool*);
    startUpdateRating(unsigned long, signed char);
    startUpdateRatingArray(nn::nex::qVector<nn::nex::DataStoreRatingTarget> const&);
    startUpdateRatingArray(nn::nex::qVector<nn::nex::DataStoreRatingTarget> const&, nn::nex::qVector<nn::nex::DataStoreRateObjectParam> const&, bool);
    tryEndUpdateRating(bool*);
    startDownloadPersistenceInfo(nn::nex::DataStorePersistenceInfo*, unsigned long, unsigned short);
    tryEndDownloadPersistenceInfo(bool*);
    startPerpetuateObject(unsigned short, unsigned long);
    tryEndPerpetuateObject(bool*);
    startSearchBalloon(nn::nex::DataStoreSearchBalloonParam const&, nn::nex::qVector<nn::nex::DataStoreSearchBalloonResultSet>*);
    tryEndSearchBalloon(bool*);
    startFetchMyInfos(nn::nex::DataStoreFetchMyInfosParam const&, nn::nex::DataStoreFetchMyInfosResult*);
    tryEndFetchMyInfos(bool*);
    calcLastNetworkErrorCode() const;
    tryCancel();
    getSceneObjName() const;
};

} 
