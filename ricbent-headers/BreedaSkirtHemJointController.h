#pragma once

class BreedaSkirtHemJointController
{
public:
    BreedaSkirtHemJointController(al::IUseCollision const*);
    setRate(float);
    addRate(float);
    subRate(float);
    calcJointCallback(int, sead::Matrix34<float>*);
    getCtrlTypeName() const;
};
