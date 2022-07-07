#pragma once

namespace al { 

class JointControllerBase
{
public:
    tryInvalidateConstraints();
    tryValidateConstraints();
    JointControllerBase(int);
    appendJointId(int);
    findNextId(int*, int) const;
    isExistId(int) const;
};

} 
