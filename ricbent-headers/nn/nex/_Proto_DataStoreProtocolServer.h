#pragma once

namespace nn { namespace nex { 

class _Proto_DataStoreProtocolServer
{
public:
    DispatchProtocolMessage(nn::nex::Message*, nn::nex::Message*, bool*, nn::nex::EndPoint*);
    ProtoStub_PrepareGetObjectV1(nn::nex::Message*, nn::nex::Message*, nn::nex::_Proto_DataStoreProtocolServer*);
    ProtoStub_PreparePostObjectV1(nn::nex::Message*, nn::nex::Message*, nn::nex::_Proto_DataStoreProtocolServer*);
    ProtoStub_DeleteObjects(nn::nex::Message*, nn::nex::Message*, nn::nex::_Proto_DataStoreProtocolServer*);
    ProtoStub_ChangeMetasV1(nn::nex::Message*, nn::nex::Message*, nn::nex::_Proto_DataStoreProtocolServer*);
    ProtoStub_GetMeta(nn::nex::Message*, nn::nex::Message*, nn::nex::_Proto_DataStoreProtocolServer*);
    ProtoStub_GetMetas(nn::nex::Message*, nn::nex::Message*, nn::nex::_Proto_DataStoreProtocolServer*);
    ProtoStub_PrepareUpdateObject(nn::nex::Message*, nn::nex::Message*, nn::nex::_Proto_DataStoreProtocolServer*);
    ProtoStub_SearchObject(nn::nex::Message*, nn::nex::Message*, nn::nex::_Proto_DataStoreProtocolServer*);
    ProtoStub_GetNotificationUrl(nn::nex::Message*, nn::nex::Message*, nn::nex::_Proto_DataStoreProtocolServer*);
    ProtoStub_GetNewArrivedNotificationsV1(nn::nex::Message*, nn::nex::Message*, nn::nex::_Proto_DataStoreProtocolServer*);
    ProtoStub_RateObject(nn::nex::Message*, nn::nex::Message*, nn::nex::_Proto_DataStoreProtocolServer*);
    ProtoStub_GetRating(nn::nex::Message*, nn::nex::Message*, nn::nex::_Proto_DataStoreProtocolServer*);
    ProtoStub_GetRatings(nn::nex::Message*, nn::nex::Message*, nn::nex::_Proto_DataStoreProtocolServer*);
    ProtoStub_ResetRatings(nn::nex::Message*, nn::nex::Message*, nn::nex::_Proto_DataStoreProtocolServer*);
    ProtoStub_GetSpecificMetaV1(nn::nex::Message*, nn::nex::Message*, nn::nex::_Proto_DataStoreProtocolServer*);
    ProtoStub_GetRatingWithLog(nn::nex::Message*, nn::nex::Message*, nn::nex::_Proto_DataStoreProtocolServer*);
    ProtoStub_PreparePostObject(nn::nex::Message*, nn::nex::Message*, nn::nex::_Proto_DataStoreProtocolServer*);
    ProtoStub_PrepareGetObject(nn::nex::Message*, nn::nex::Message*, nn::nex::_Proto_DataStoreProtocolServer*);
    ProtoStub_GetNewArrivedNotifications(nn::nex::Message*, nn::nex::Message*, nn::nex::_Proto_DataStoreProtocolServer*);
    ProtoStub_GetSpecificMeta(nn::nex::Message*, nn::nex::Message*, nn::nex::_Proto_DataStoreProtocolServer*);
    ProtoStub_GetPersistenceInfo(nn::nex::Message*, nn::nex::Message*, nn::nex::_Proto_DataStoreProtocolServer*);
    ProtoStub_GetPersistenceInfos(nn::nex::Message*, nn::nex::Message*, nn::nex::_Proto_DataStoreProtocolServer*);
    ProtoStub_PerpetuateObject(nn::nex::Message*, nn::nex::Message*, nn::nex::_Proto_DataStoreProtocolServer*);
    ProtoStub_PrepareGetObjectOrMetaBinary(nn::nex::Message*, nn::nex::Message*, nn::nex::_Proto_DataStoreProtocolServer*);
    ProtoStub_GetPasswordInfo(nn::nex::Message*, nn::nex::Message*, nn::nex::_Proto_DataStoreProtocolServer*);
    ProtoStub_GetPasswordInfos(nn::nex::Message*, nn::nex::Message*, nn::nex::_Proto_DataStoreProtocolServer*);
    ProtoStub_GetMetasMultipleParam(nn::nex::Message*, nn::nex::Message*, nn::nex::_Proto_DataStoreProtocolServer*);
    ProtoStub_ChangeMetas(nn::nex::Message*, nn::nex::Message*, nn::nex::_Proto_DataStoreProtocolServer*);
    ProtoStub_RateObjects(nn::nex::Message*, nn::nex::Message*, nn::nex::_Proto_DataStoreProtocolServer*);
    ProtoStub_PostMetaBinaryWithDataId(nn::nex::Message*, nn::nex::Message*, nn::nex::_Proto_DataStoreProtocolServer*);
    ProtoStub_PostMetaBinariesWithDataId(nn::nex::Message*, nn::nex::Message*, nn::nex::_Proto_DataStoreProtocolServer*);
    ProtoStub_RateObjectWithPosting(nn::nex::Message*, nn::nex::Message*, nn::nex::_Proto_DataStoreProtocolServer*);
    ProtoStub_RateObjectsWithPosting(nn::nex::Message*, nn::nex::Message*, nn::nex::_Proto_DataStoreProtocolServer*);
    ProtoStub_GetObjectInfos(nn::nex::Message*, nn::nex::Message*, nn::nex::_Proto_DataStoreProtocolServer*);
    ProtoStub_SearchObjectLight(nn::nex::Message*, nn::nex::Message*, nn::nex::_Proto_DataStoreProtocolServer*);
    ProtoStub_AddToBufferQueue(nn::nex::Message*, nn::nex::Message*, nn::nex::_Proto_DataStoreProtocolServer*);
    ProtoStub_AddToBufferQueues(nn::nex::Message*, nn::nex::Message*, nn::nex::_Proto_DataStoreProtocolServer*);
    ProtoStub_GetBufferQueue(nn::nex::Message*, nn::nex::Message*, nn::nex::_Proto_DataStoreProtocolServer*);
    ProtoStub_GetBufferQueues(nn::nex::Message*, nn::nex::Message*, nn::nex::_Proto_DataStoreProtocolServer*);
    ProtoStub_ClearBufferQueues(nn::nex::Message*, nn::nex::Message*, nn::nex::_Proto_DataStoreProtocolServer*);
    ProtoStub_SearchBalloon(nn::nex::Message*, nn::nex::Message*, nn::nex::_Proto_DataStoreProtocolServer*);
    ProtoStub_FetchMyInfos(nn::nex::Message*, nn::nex::Message*, nn::nex::_Proto_DataStoreProtocolServer*);
    ~_Proto_DataStoreProtocolServer();
};

} } 
