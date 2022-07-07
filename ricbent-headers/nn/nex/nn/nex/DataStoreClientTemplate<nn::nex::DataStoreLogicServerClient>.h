#pragma once

namespace nn { namespace nex { namespace nn { namespace nex { namespace DataStoreClientTemplate<nn::nex::DataStoreLogicServerClient> {

CheckNewArrivalImpl<nn::nex::DataStoreApiVersionTraits<(nn::nex::DATASTORE_API_VERSION)1> >(nn::nex::ProtocolCallContext*, unsigned char const*, nn::nex::DataStoreReceiveNewArrivedObjectsEventListenerTemplate<unsigned long>*, bool*);
ReceiveNewArrivedObjectsImpl<nn::nex::DataStoreApiVersionTraits<(nn::nex::DATASTORE_API_VERSION)1> >(nn::nex::ProtocolCallContext*, unsigned char const*, nn::nex::qVector<nn::nex::DataStoreApiVersionTraits<(nn::nex::DATASTORE_API_VERSION)1>::TGetObjectEventListener*>, nn::nex::DataStoreApiVersionTraits<(nn::nex::DATASTORE_API_VERSION)1>::TReceiveNewArrivedObjectsEventListener*, bool*);
ReceiveNewArrivedObjectsImpl<nn::nex::DataStoreApiVersionTraits<(nn::nex::DATASTORE_API_VERSION)0> >(nn::nex::ProtocolCallContext*, unsigned char const*, nn::nex::qVector<nn::nex::DataStoreApiVersionTraits<(nn::nex::DATASTORE_API_VERSION)0>::TGetObjectEventListener*>, nn::nex::DataStoreApiVersionTraits<(nn::nex::DATASTORE_API_VERSION)0>::TReceiveNewArrivedObjectsEventListener*, bool*);

} } } } } 
