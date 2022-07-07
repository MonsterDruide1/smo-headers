#pragma once

namespace nn { namespace nex { 

class GlobalVariables
{
public:
    GetThreadVariableListPtr();
    GlobalVariables();
    ~GlobalVariables();
    AcquireInstance();
    ReleaseInstance();
    GetCount();
    ClearCache();
    s_pGv;
};

} } 
