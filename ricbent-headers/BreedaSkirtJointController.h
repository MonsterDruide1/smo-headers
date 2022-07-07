#pragma once

class BreedaSkirtJointController
{
public:
    BreedaSkirtJointController(sead::Vector3<float> const*);
    calcJointCallback(int, sead::Matrix34<float>*);
    setRate(float);
    addRate(float);
    subRate(float);
    getCtrlTypeName() const;
};
