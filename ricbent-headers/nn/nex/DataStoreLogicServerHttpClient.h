#pragma once

namespace nn { namespace nex { 

class DataStoreLogicServerHttpClient
{
public:
    DataStoreLogicServerHttpClient();
    ~DataStoreLogicServerHttpClient();
    PostMetaBinary(nn::nex::ProtocolCallContext*, nn::nex::DataStorePreparePostParam const&, unsigned long*);
    PostMetaBinaryWithDataId(nn::nex::ProtocolCallContext*, unsigned long, nn::nex::DataStorePreparePostParam const&);
    PostMetaBinariesWithDataId(nn::nex::ProtocolCallContext*, nn::nex::qVector<std::__1::pair<unsigned long, nn::nex::DataStorePreparePostParam> > const&, bool, nn::nex::qVector<nn::nex::qResult>*);
    PostMetaBinaryWithDataIds(nn::nex::ProtocolCallContext*, nn::nex::qVector<unsigned long> const&, nn::nex::DataStorePreparePostParam const&, bool, nn::nex::qVector<nn::nex::qResult>*);
    GetRating(nn::nex::ProtocolCallContext*, nn::nex::DataStoreRatingTarget const&, nn::nex::DataStoreRatingInfo*, unsigned long);
    GetRating(nn::nex::ProtocolCallContext*, nn::nex::qVector<unsigned long> const&, nn::nex::qVector<nn::nex::qVector<nn::nex::DataStoreRatingInfoWithSlot> >*, nn::nex::qVector<nn::nex::qResult>*, unsigned long);
    GetRatingWithLog(nn::nex::ProtocolCallContext*, nn::nex::DataStoreRatingTarget const&, nn::nex::DataStoreRatingInfo*, nn::nex::DataStoreRatingLog*, unsigned long);
    PrepareGetObject(nn::nex::ProtocolCallContext*, nn::nex::DataStorePrepareGetParam const&, nn::nex::DataStoreReqGetInfo*);
    PrepareGetObject(nn::nex::ProtocolCallContext*, nn::nex::DataStorePrepareGetParamV1 const&, nn::nex::DataStoreReqGetInfoV1*);
    PrepareGetObjectOrMetaBinary(nn::nex::ProtocolCallContext*, nn::nex::DataStorePrepareGetParam const&, nn::nex::DataStoreReqGetInfo*, nn::nex::DataStoreReqGetAdditionalMeta*);
    PrepareGetObjectOrMetaBinary(nn::nex::ProtocolCallContext*, nn::nex::DataStorePrepareGetParamV1 const&, nn::nex::DataStoreReqGetInfoV1*, nn::nex::DataStoreReqGetAdditionalMeta*);
    PreparePostObject(nn::nex::ProtocolCallContext*, nn::nex::DataStorePreparePostParam const&, nn::nex::DataStoreReqPostInfo*);
    PreparePostObject(nn::nex::ProtocolCallContext*, nn::nex::DataStorePreparePostParamV1 const&, nn::nex::DataStoreReqPostInfoV1*);
    CompletePostObject(nn::nex::ProtocolCallContext*, nn::nex::DataStoreCompletePostParam const&);
    CompletePostObject(nn::nex::ProtocolCallContext*, nn::nex::DataStoreCompletePostParamV1 const&);
    CompleteSuspendedPostObject(nn::nex::ProtocolCallContext*, nn::nex::qVector<unsigned long> const&);
    PrepareUpdateObject(nn::nex::ProtocolCallContext*, nn::nex::DataStorePrepareUpdateParam const&, nn::nex::DataStoreReqUpdateInfo*);
    CompleteUpdateObject(nn::nex::ProtocolCallContext*, nn::nex::DataStoreCompleteUpdateParam const&);
    DeleteObject(nn::nex::ProtocolCallContext*, nn::nex::DataStoreDeleteParam const&);
    ChangeMeta(nn::nex::ProtocolCallContext*, nn::nex::DataStoreChangeMetaParam const&);
    GetMeta(nn::nex::ProtocolCallContext*, nn::nex::DataStoreGetMetaParam const&, nn::nex::DataStoreMetaInfo*);
    GetMeta(nn::nex::ProtocolCallContext*, nn::nex::qVector<unsigned long> const&, nn::nex::DataStoreGetMetaParam const&, nn::nex::qVector<nn::nex::DataStoreMetaInfo>*, nn::nex::qVector<nn::nex::qResult>*);
    GetMeta(nn::nex::ProtocolCallContext*, nn::nex::qVector<nn::nex::DataStoreGetMetaParam> const&, nn::nex::qVector<nn::nex::DataStoreMetaInfo>*, nn::nex::qVector<nn::nex::qResult>*);
    SearchObject(nn::nex::ProtocolCallContext*, nn::nex::DataStoreSearchParam const&, nn::nex::DataStoreSearchResult*);
    SearchObjectLight(nn::nex::ProtocolCallContext*, nn::nex::DataStoreSearchParam const&, nn::nex::DataStoreSearchResult*);
    GetNotificationUrl(nn::nex::ProtocolCallContext*, nn::nex::DataStoreGetNotificationUrlParam const&, nn::nex::DataStoreReqGetNotificationUrlInfo*);
    GetNewArrivedNotifications(nn::nex::ProtocolCallContext*, nn::nex::DataStoreGetNewArrivedNotificationsParam const&, nn::nex::qVector<nn::nex::DataStoreNotification>*, bool*);
    GetNewArrivedNotifications(nn::nex::ProtocolCallContext*, nn::nex::DataStoreGetNewArrivedNotificationsParam const&, nn::nex::qVector<nn::nex::DataStoreNotificationV1>*, bool*);
    RateObject(nn::nex::ProtocolCallContext*, nn::nex::DataStoreRatingTarget const&, nn::nex::DataStoreRateObjectParam const&, nn::nex::DataStoreRatingInfo*);
    GetSpecificMeta(nn::nex::ProtocolCallContext*, nn::nex::DataStoreGetSpecificMetaParam const&, nn::nex::qVector<nn::nex::DataStoreSpecificMetaInfo>*);
    GetSpecificMeta(nn::nex::ProtocolCallContext*, nn::nex::DataStoreGetSpecificMetaParamV1 const&, nn::nex::qVector<nn::nex::DataStoreSpecificMetaInfoV1>*);
    ResetRating(nn::nex::ProtocolCallContext*, nn::nex::DataStoreRatingTarget const&, unsigned long);
    ResetRating(nn::nex::ProtocolCallContext*, unsigned long const&);
    ResetRating(nn::nex::ProtocolCallContext*, nn::nex::qVector<unsigned long> const&, bool, nn::nex::qVector<nn::nex::qResult>*);
    TouchObject(nn::nex::ProtocolCallContext*, nn::nex::DataStoreTouchObjectParam const&);
    GetPersistenceInfo(nn::nex::ProtocolCallContext*, unsigned long, unsigned short, nn::nex::DataStorePersistenceInfo*);
    GetPersistenceInfo(nn::nex::ProtocolCallContext*, unsigned long, nn::nex::qVector<unsigned short>, nn::nex::qVector<nn::nex::DataStorePersistenceInfo>*, nn::nex::qVector<nn::nex::qResult>*);
    PerpetuateObject(nn::nex::ProtocolCallContext*, unsigned short, unsigned long, bool);
    UnperpetuateObject(nn::nex::ProtocolCallContext*, unsigned short, bool);
    GetPasswordInfo(nn::nex::ProtocolCallContext*, unsigned long, nn::nex::DataStorePasswordInfo*);
    GetPasswordInfo(nn::nex::ProtocolCallContext*, nn::nex::qVector<unsigned long> const&, nn::nex::qVector<nn::nex::DataStorePasswordInfo>*, nn::nex::qVector<nn::nex::qResult>*);
    GetObjectInfo(nn::nex::ProtocolCallContext*, nn::nex::qVector<unsigned long> const&, nn::nex::qVector<nn::nex::DataStoreReqGetInfo>*, nn::nex::qVector<nn::nex::qResult>*);
    GetMyPrincipalId() const;
    IsCredentialsNeeded() const;
};

} } 
