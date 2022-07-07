#pragma once

class CapWorldNpcTailJointController
{
public:
    CapWorldNpcTailJointController(al::LiveActor const*);
    init();
    calcJointCallback(int, sead::Matrix34<float>*);
    getCtrlTypeName() const;
};
