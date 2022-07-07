#pragma once

namespace nn { namespace nex { namespace JobDataStoreReceiveNewArrivedObjects<nn::nex::DataStoreApiVersionTraits<(nn::nex::DATASTORE_API_VERSION)1> > {

JobDataStoreReceiveNewArrivedObjects();
~JobDataStoreReceiveNewArrivedObjects();
Initialize(unsigned int, nn::nex::DataStoreClientInterface*, nn::nex::DataStoreLogicServerClientInterface*, unsigned int, bool, unsigned long, unsigned char const*, nn::nex::qVector<nn::nex::DataStoreGetObjectEventListenerTemplate<unsigned long>*>, nn::nex::DataStoreReceiveNewArrivedObjectsEventListenerTemplate<unsigned long>*, bool*);
StepCheckNotification();
Initialize(unsigned int, nn::nex::DataStoreClientInterface*, unsigned int, unsigned long, unsigned char const*, nn::nex::DataStoreReceiveNewArrivedObjectsEventListenerTemplate<unsigned long>*, bool*);
CompleteJob(nn::nex::qResult const&);
StepWaitingCheckNotification();
StepGetNewArrivedNotifications();
StepWaitingGetNewArrivedNotifications();
StepGetSpecificMeta();
StepGetObject();
StepWaitingGetSpecificMeta();
StepWaitingGetObject();

} } } 
