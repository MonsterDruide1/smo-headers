#pragma once

namespace al { 

class BgmRhythmSyncDirector
{
public:
    BgmRhythmSyncDirector(al::IUseActiveBgmLine*);
    update();
    tryRegistTargetResourceName(char const*);
};

} 
