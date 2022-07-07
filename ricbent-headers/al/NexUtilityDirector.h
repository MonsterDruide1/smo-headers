#pragma once

namespace al { 

class NexUtilityDirector
{
public:
    NexUtilityDirector();
    ~NexUtilityDirector();
    init(nn::nex::Credentials*);
    tryGetValue(int*, unsigned short) const;
    getValue(unsigned short) const;
};

} 
