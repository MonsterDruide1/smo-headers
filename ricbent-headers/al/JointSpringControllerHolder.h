#pragma once

namespace al { 

class JointSpringControllerHolder
{
public:
    JointSpringControllerHolder();
    init(int);
    init(al::LiveActor*, char const*);
    init(al::LiveActor*, al::ByamlIter const&);
    addController(al::JointSpringController*, char const*);
    tryInvalidateConstraints(unsigned int);
    tryValidateConstraints(unsigned int);
    tryInvalidateConstraints(char const*);
    tryValidateConstraints(char const*);
    offControlAll();
    setControlRateAll(float);
    onControlAll();
    resetControlAll();
    addControlRateAll(float);
    subControlRateAll(float);
    tryCreateAndInitJointControllerKeeper(al::LiveActor*, char const*);
    calcInitFileSpringControlJointNum(al::LiveActor const*, char const*);
};

} 
