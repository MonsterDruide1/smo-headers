#pragma once

class BombTailTailJointController
{
public:
    BombTailTailJointController(sead::Matrix34<float> const*, bool const*, float);
    calcJointCallback(int, sead::Matrix34<float>*);
    getCtrlTypeName() const;
};
