#pragma once

namespace nn { namespace nex { namespace JobDataStorePostObject<nn::nex::DataStoreApiVersionTraits<(nn::nex::DATASTORE_API_VERSION)1> > {

JobDataStorePostObject();
~JobDataStorePostObject();
Initialize(unsigned int, nn::nex::DataStoreLogicServerClientInterface*, nn::nex::DataStorePreparePostParam const&, unsigned int, bool, unsigned long, unsigned long, unsigned long, unsigned int, int, unsigned long*, nn::nex::DataStorePostObjectEventListener*, unsigned long, unsigned char const*, bool);
StepLogicServerPreparePostObject();
CompleteJob(nn::nex::qResult const&);
StepFileServerPostObject();
StepLogicServerCompletePostObject();
StepWaitingLogicServerCompletePostObject();

} } } 
