#pragma once

namespace al { 

class DemoActorHolder
{
public:
    DemoActorHolder(bool);
    initPlacementDemoActor(al::PlacementInfo const&, al::ActorInitInfo const&, sead::Matrix34<float> const*);
    initPlacementDesignActor(al::PlacementInfo const&, al::ActorInitInfo const&, sead::Matrix34<float> const*);
    appear();
    kill();
    setEndCameraInterpolateFrame(int);
    startAction(int);
    startSequence();
    updateSequence();
    updateGraphics();
    isActionEndCamera(int) const;
    isEndSequence() const;
    getDemoCameraNum() const;
    isExistCamera() const;
    tryFindDemoActor(char const*);
    getCurrentDemoActionName() const;
    getCurrentDemoFrame() const;
    getCurrentDemoFrameMax() const;
    getDemoActor(int) const;
};

} 
