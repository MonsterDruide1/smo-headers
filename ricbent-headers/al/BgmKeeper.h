#pragma once

namespace al { 

class BgmKeeper
{
public:
    create(al::AudioSystemInfo const*, al::BgmDirector*, char const*);
    BgmKeeper(al::AudioSystemInfo const*, al::BgmDirector*, char const*);
    update();
    getUserName() const;
};

} 
