#pragma once

namespace nn { namespace nex { 

class DataStorePreparePostParam
{
public:
    SetRatingSetting(nn::nex::qMap<signed char, nn::nex::DataStoreRatingInitParam> const&);
    Reset();
    ~DataStorePreparePostParam();
};

} } 
