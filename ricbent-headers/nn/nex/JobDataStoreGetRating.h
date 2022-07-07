#pragma once

namespace nn { namespace nex { 

class JobDataStoreGetRating
{
public:
    JobDataStoreGetRating();
    ~JobDataStoreGetRating();
    Initialize(unsigned int, nn::nex::DataStoreLogicServerClientInterface*, unsigned long const&, nn::nex::qMap<signed char, nn::nex::DataStoreRatingInfo>*, unsigned long);
    StepGetRating();
    Initialize(unsigned int, nn::nex::DataStoreLogicServerClientInterface*, nn::nex::qVector<unsigned long> const&, nn::nex::qVector<nn::nex::qMap<signed char, nn::nex::DataStoreRatingInfo> >*, nn::nex::qVector<nn::nex::qResult>*);
    CompleteJob(nn::nex::qResult const&);
    StepConvertType();
};

} } 
