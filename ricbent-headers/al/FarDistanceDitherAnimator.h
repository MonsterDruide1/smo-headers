#pragma once

namespace al { 

class FarDistanceDitherAnimator
{
public:
    tryCreate(al::LiveActor*, al::Resource const*, char const*);
    loadParam(al::ByamlIter const&);
    FarDistanceDitherAnimator(al::LiveActor*);
    update();
    show();
    ~FarDistanceDitherAnimator();
};

} 
