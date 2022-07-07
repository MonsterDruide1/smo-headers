#pragma once

namespace al { 

class SeStageInfoList
{
public:
    SeStageInfoList(int);
    tryFindInfoUnConst(char const*, int) const;
    tryFindInfo(char const*, int) const;
};

} 
