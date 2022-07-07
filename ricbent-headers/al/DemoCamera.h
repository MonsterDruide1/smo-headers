#pragma once

namespace al { 

class DemoCamera
{
public:
    DemoCamera();
    initDemoActor(al::ActorInitInfo const&, al::ActorInitInfo const&, sead::Matrix34<float> const*, bool);
    initDemoActorSerial(al::ActorInitInfo const&, al::ActorInitInfo const&, sead::Matrix34<float> const*);
    getCameraDirector() const;
    startAction(int);
    startCamera(int);
    startDemo(sead::Matrix34<float> const&);
    endDemo();
    endCameraAll();
    endCamera(int);
    isEndAnimCamera(int) const;
    getMaxFrame() const;
    getCurrentFrame() const;
    setInterpolateFrame(int);
    getCurrentActionName() const;
};

} 
