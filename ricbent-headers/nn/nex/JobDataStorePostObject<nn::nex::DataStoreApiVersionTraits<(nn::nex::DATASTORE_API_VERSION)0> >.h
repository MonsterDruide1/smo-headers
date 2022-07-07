#pragma once

namespace nn { namespace nex { namespace JobDataStorePostObject<nn::nex::DataStoreApiVersionTraits<(nn::nex::DATASTORE_API_VERSION)0> > {

JobDataStorePostObject();
~JobDataStorePostObject();
Initialize(unsigned int, nn::nex::DataStoreLogicServerClientInterface*, nn::nex::DataStorePreparePostParamV1 const&, unsigned int, bool, unsigned long, unsigned long, unsigned long, unsigned int, int, unsigned int*, nn::nex::DataStorePostObjectEventListener*, unsigned long, unsigned char const*, bool);
StepLogicServerPreparePostObject();
CompleteJob(nn::nex::qResult const&);
StepFileServerPostObject();
StepLogicServerCompletePostObject();
StepWaitingLogicServerCompletePostObject();

} } } 
