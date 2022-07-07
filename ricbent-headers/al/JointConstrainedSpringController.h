#pragma once

namespace al { 

class JointConstrainedSpringController
{
public:
    JointConstrainedSpringController(al::LiveActor const*);
    calcJointCallback(int, sead::Matrix34<float>*);
    load(al::ByamlIter const&);
    tryInvalidateConstraints();
    tryValidateConstraints();
};

} 
