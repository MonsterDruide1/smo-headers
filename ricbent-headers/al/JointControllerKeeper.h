#pragma once

namespace al { 

class JointControllerKeeper
{
public:
    JointControllerKeeper(int);
    Exec(nn::g3d::ICalculateWorldCallback::CallbackArg&, nn::g3d::WorldMtxManip&);
    pushBackController(al::JointControllerBase*);
    ~JointControllerKeeper();
};

} 
