#pragma once

namespace al { 

class BgmPlayInfoInAction
{
public:
    createInfo(al::ByamlIter const&);
    compareInfo(al::BgmPlayInfoInAction const*, al::BgmPlayInfoInAction const*);
    BgmPlayInfoInAction();
};

} 
