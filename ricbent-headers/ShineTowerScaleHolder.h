#pragma once

class ShineTowerScaleHolder
{
public:
    ShineTowerScaleHolder(al::LiveActor*, sead::Matrix34<float>*);
    update();
    setMeterRotateForWorld(bool);
    calcPayShineCameraMtx(sead::Matrix34<float>*, bool);
    startDemo(int);
    updateForDemo();
    isEndDemo() const;
    calcScale() const;
};
