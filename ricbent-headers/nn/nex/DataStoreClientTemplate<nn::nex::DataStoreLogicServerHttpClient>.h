#pragma once

namespace nn { namespace nex { namespace DataStoreClientTemplate<nn::nex::DataStoreLogicServerHttpClient> {

DataStoreClientTemplate();
~DataStoreClientTemplate();
GetObject(nn::nex::ProtocolCallContext*, nn::nex::DataStorePrepareGetParam const&, nn::nex::DataStoreGetObjectEventListenerTemplate<unsigned long>*);
GetObjectImpl<nn::nex::DataStoreApiVersionTraits<(nn::nex::DATASTORE_API_VERSION)1> >(nn::nex::ProtocolCallContext*, nn::nex::DataStoreApiVersionTraits<(nn::nex::DATASTORE_API_VERSION)1>::TPrepareGetParam const&, nn::nex::DataStoreApiVersionTraits<(nn::nex::DATASTORE_API_VERSION)1>::TGetObjectEventListener*, unsigned char*, unsigned long, bool, unsigned long*);
GetObjectOrMetaBinary(nn::nex::ProtocolCallContext*, nn::nex::DataStorePrepareGetParam const&, nn::nex::DataStoreGetObjectEventListenerTemplate<unsigned long>*);
GetObjectV1(nn::nex::ProtocolCallContext*, nn::nex::DataStorePrepareGetParamV1 const&, nn::nex::DataStoreGetObjectEventListenerTemplate<unsigned int>*);
GetObjectImpl<nn::nex::DataStoreApiVersionTraits<(nn::nex::DATASTORE_API_VERSION)0> >(nn::nex::ProtocolCallContext*, nn::nex::DataStoreApiVersionTraits<(nn::nex::DATASTORE_API_VERSION)0>::TPrepareGetParam const&, nn::nex::DataStoreApiVersionTraits<(nn::nex::DATASTORE_API_VERSION)0>::TGetObjectEventListener*, unsigned char*, unsigned long, bool, unsigned long*);
GetObject(nn::nex::ProtocolCallContext*, nn::nex::DataStorePrepareGetParam const&, void*, unsigned long, unsigned long*);
PostObject(nn::nex::ProtocolCallContext*, nn::nex::DataStorePreparePostParam const&, unsigned long*, nn::nex::DataStorePostObjectEventListener*);
PostObjectImpl<nn::nex::DataStoreApiVersionTraits<(nn::nex::DATASTORE_API_VERSION)1> >(nn::nex::ProtocolCallContext*, nn::nex::DataStoreApiVersionTraits<(nn::nex::DATASTORE_API_VERSION)1>::TPreparePostParam const&, nn::nex::DataStoreApiVersionTraits<(nn::nex::DATASTORE_API_VERSION)1>::TDataId*, nn::nex::DataStorePostObjectEventListener*, unsigned char const*, bool);
PostObjectV1(nn::nex::ProtocolCallContext*, nn::nex::DataStorePreparePostParamV1 const&, unsigned int*, nn::nex::DataStorePostObjectEventListener*);
PostObjectImpl<nn::nex::DataStoreApiVersionTraits<(nn::nex::DATASTORE_API_VERSION)0> >(nn::nex::ProtocolCallContext*, nn::nex::DataStoreApiVersionTraits<(nn::nex::DATASTORE_API_VERSION)0>::TPreparePostParam const&, nn::nex::DataStoreApiVersionTraits<(nn::nex::DATASTORE_API_VERSION)0>::TDataId*, nn::nex::DataStorePostObjectEventListener*, unsigned char const*, bool);
PostObject(nn::nex::ProtocolCallContext*, nn::nex::DataStorePreparePostParam const&, unsigned long*, void const*, bool);
PostObject(nn::nex::ProtocolCallContext*, nn::nex::DataStorePreparePostParam const&, unsigned long*);
PostObject(nn::nex::ProtocolCallContext*, unsigned long, nn::nex::DataStorePreparePostParam const&);
PostObject(nn::nex::ProtocolCallContext*, nn::nex::qVector<std::__1::pair<unsigned long, nn::nex::DataStorePreparePostParam> > const&, bool, nn::nex::qVector<nn::nex::qResult>*);
PostObject(nn::nex::ProtocolCallContext*, nn::nex::qVector<unsigned long> const&, nn::nex::DataStorePreparePostParam const&, bool, nn::nex::qVector<nn::nex::qResult>*);
UpdateObject(nn::nex::ProtocolCallContext*, nn::nex::DataStorePrepareUpdateParam const&, nn::nex::DataStorePostObjectEventListener*);
UpdateObjectImpl(nn::nex::ProtocolCallContext*, nn::nex::DataStorePrepareUpdateParam const&, nn::nex::DataStorePostObjectEventListener*, unsigned char const*, bool);
UpdateObject(nn::nex::ProtocolCallContext*, nn::nex::DataStorePrepareUpdateParam const&, void const*, bool);
SetHttpThreadPriority(unsigned int);
GetHttpThreadPriority() const;
SetUseHttps(bool);
GetUseHttps() const;
SetRelayBufferSize(unsigned long);
GetRelayBufferSize() const;
SetHttpBufferSize(unsigned long);
GetHttpBufferSize() const;
SetHttpSendSocketBufferSize(unsigned long);
GetHttpSendSocketBufferSize() const;
SetHttpRecvSocketBufferSize(unsigned long);
GetHttpRecvSocketBufferSize() const;
SetDataTransferTimeout(unsigned int, int);
CheckNotification(nn::nex::ProtocolCallContext*, nn::nex::String const&, nn::nex::String*, unsigned long, unsigned long*, unsigned int, unsigned int*, unsigned long, bool*, bool);
CheckNotificationImpl(nn::nex::ProtocolCallContext*, nn::nex::String const&, nn::nex::String*, unsigned long, unsigned long*, unsigned int, unsigned int*, unsigned long, bool*, bool);
CheckNewArrival(nn::nex::ProtocolCallContext*, unsigned char const*, nn::nex::DataStoreReceiveNewArrivedObjectsEventListenerTemplate<unsigned long>*, bool*);
ReceiveNewArrivedObjects(nn::nex::ProtocolCallContext*, unsigned char const*, nn::nex::qVector<nn::nex::DataStoreGetObjectEventListenerTemplate<unsigned long>*>, nn::nex::DataStoreReceiveNewArrivedObjectsEventListenerTemplate<unsigned long>*, bool*);
ReceiveNewArrivedObjectsV1(nn::nex::ProtocolCallContext*, unsigned char const*, nn::nex::qVector<nn::nex::DataStoreGetObjectEventListenerTemplate<unsigned int>*>, nn::nex::DataStoreReceiveNewArrivedObjectsEventListenerTemplate<unsigned int>*, bool*);
GetRating(nn::nex::ProtocolCallContext*, nn::nex::DataStoreRatingTarget const&, nn::nex::DataStoreRatingInfo*, unsigned long);
GetRating(nn::nex::ProtocolCallContext*, nn::nex::qVector<unsigned long> const&, nn::nex::qVector<nn::nex::qVector<nn::nex::DataStoreRatingInfoWithSlot> >*, nn::nex::qVector<nn::nex::qResult>*, unsigned long);
GetRating(nn::nex::ProtocolCallContext*, unsigned long, nn::nex::qMap<signed char, nn::nex::DataStoreRatingInfo>*, unsigned long);
GetRatingImpl(nn::nex::ProtocolCallContext*, unsigned long, nn::nex::qMap<signed char, nn::nex::DataStoreRatingInfo>*, unsigned long);
GetRating(nn::nex::ProtocolCallContext*, nn::nex::qVector<unsigned long> const&, nn::nex::qVector<nn::nex::qMap<signed char, nn::nex::DataStoreRatingInfo> >*, nn::nex::qVector<nn::nex::qResult>*);
GetRatingImpl(nn::nex::ProtocolCallContext*, nn::nex::qVector<unsigned long> const&, nn::nex::qVector<nn::nex::qMap<signed char, nn::nex::DataStoreRatingInfo> >*, nn::nex::qVector<nn::nex::qResult>*);
GetRating(nn::nex::ProtocolCallContext*, nn::nex::DataStoreRatingTarget const&, nn::nex::DataStoreRatingInfo*, nn::nex::DataStoreRatingLog*, unsigned long);
GetObjectByInfo(nn::nex::ProtocolCallContext*, nn::nex::DataStoreReqGetInfo const&, nn::nex::DataStoreGetObjectEventListenerTemplate<unsigned long>*);
GetObjectByInfoImpl<nn::nex::DataStoreApiVersionTraits<(nn::nex::DATASTORE_API_VERSION)1> >(nn::nex::ProtocolCallContext*, nn::nex::DataStoreReqGetInfo const&, nn::nex::DataStoreApiVersionTraits<(nn::nex::DATASTORE_API_VERSION)1>::TGetObjectEventListener*, unsigned char*, unsigned long, unsigned long*);
GetObjectByInfo(nn::nex::ProtocolCallContext*, nn::nex::DataStoreReqGetInfo const&, void*, unsigned long, unsigned long*);
Trace(unsigned long) const;
SetDependentRvConnection(nn::nex::ProtocolCallContext*) const;

} } } 
