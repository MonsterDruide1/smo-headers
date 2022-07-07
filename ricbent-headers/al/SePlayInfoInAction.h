#pragma once

namespace al { 

class SePlayInfoInAction
{
public:
    createInfo(al::ByamlIter const&);
    SePlayInfoInAction();
    SePlayInfoInAction(al::SePlayInfoInAction const&);
    operator=(al::SePlayInfoInAction const&);
    compareInfo(al::SePlayInfoInAction const*, al::SePlayInfoInAction const*);
};

} 
