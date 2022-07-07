#pragma once

namespace nn { namespace nex { namespace JobDataStoreGetObject<nn::nex::DataStoreApiVersionTraits<(nn::nex::DATASTORE_API_VERSION)0> > {

JobDataStoreGetObject();
~JobDataStoreGetObject();
Initialize(unsigned int, nn::nex::DataStoreLogicServerClientInterface*, nn::nex::DataStorePrepareGetParamV1 const&, unsigned int, bool, unsigned long, unsigned long, unsigned long, unsigned int, int, nn::nex::DataStoreGetObjectEventListenerTemplate<unsigned int>*, unsigned long, unsigned char*, unsigned long, bool, unsigned long*, nn::nex::DataStoreReqGetInfoV1 const*);
StepFileServerGetObject();
StepLogicServerPrepareGetObject();
CompleteJob(nn::nex::qResult const&);
StepWaitingLogicServerPrepareGetObject();
StepProcessMetaBinary();
StepWaitingFileServerGetObject();
PrepareRequest(nn::nex::HttpConnection*);
ProcessResponseHeader(nn::nex::HttpConnection*, int);
ProcessResponse(unsigned char const*, unsigned long);

} } } 
