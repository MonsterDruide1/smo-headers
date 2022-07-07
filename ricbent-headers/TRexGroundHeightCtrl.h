#pragma once

class TRexGroundHeightCtrl
{
public:
    TRexGroundHeightCtrl(al::LiveActor*);
    calcJointCallback(int, sead::Matrix34<float>*);
    start();
    end();
    addSink(float);
    hover();
    isMaxSink() const;
    getCtrlTypeName() const;
};
