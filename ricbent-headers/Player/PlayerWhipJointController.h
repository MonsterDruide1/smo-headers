#pragma once

class PlayerWhipJointController
{
public:
    PlayerWhipJointController(al::LiveActor const*, int, int, float);
    calcJointCallback(int, sead::Matrix34<float>*);
    setActiveFlag(bool);
    getCtrlTypeName() const;
};
