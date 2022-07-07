#pragma once

class ShineTowerCommonKeeper
{
public:
    ShineTowerCommonKeeper(al::LiveActor*, sead::Matrix34<float>*, int, al::ActorInitInfo const&);
    offLight(al::LiveActor*);
    update();
    updateCommon();
    updateLayoutTotalCount(int);
    updateSensor();
    calcScale() const;
    setMeterRotateForWorld(bool);
    startDemo(int);
    updateForDemo();
    isEndDemo() const;
    isLightOn() const;
    setTotalCountLayout(al::LiveActor*) const;
};
