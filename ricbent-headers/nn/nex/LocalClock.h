#pragma once

namespace nn { namespace nex { 

class LocalClock
{
public:
    LocalClock();
    ~LocalClock();
    DeleteInstance();
    s_pInstance;
};

} } 
