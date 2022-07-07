#pragma once

namespace nn { namespace nex { 

class JobDataStoreUpdateObject
{
public:
    JobDataStoreUpdateObject();
    ~JobDataStoreUpdateObject();
    Initialize(unsigned int, nn::nex::DataStoreLogicServerClientInterface*, nn::nex::DataStorePrepareUpdateParam const&, unsigned int, bool, unsigned long, unsigned long, unsigned long, unsigned int, int, nn::nex::DataStorePostObjectEventListener*, unsigned long, unsigned char const*, bool);
    StepLogicServerPrepareUpdateObject();
    CompleteJob(nn::nex::qResult const&);
    StepFileServerPostObject();
    StepLogicServerCompleteUpdateObject();
    StepWaitingLogicServerCompleteUpdateObject();
};

} } 
