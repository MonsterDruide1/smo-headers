#pragma once

namespace al { 

class MeInfoKeeper
{
public:
    MeInfoKeeper(al::IAudioResourceInfoAccessor const*);
    tryFindMeInfoListById(unsigned int) const;
};

} 
