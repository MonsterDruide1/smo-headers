#pragma once

namespace al { 

class DemoActor
{
public:
    DemoActor(char const*);
    initDemoActor(al::ActorInitInfo const&, al::ActorInitInfo const&, sead::Matrix34<float> const*, bool);
    initCommon(al::ActorInitInfo const&, al::ActorInitInfo const&, sead::Matrix34<float> const*, bool);
    initDemoActorSerial(al::ActorInitInfo const&, al::ActorInitInfo const&, sead::Matrix34<float> const*);
    init(al::ActorInitInfo const&);
    initAfterCreateFromFactory(al::ActorInitInfo const&, al::ActorInitInfo const&, sead::Matrix34<float> const*, bool);
    control();
    startDemo(sead::Matrix34<float> const&);
    startAction(int);
    isExistAction(int) const;
    getDemoActionName(int) const;
    startActionByName(char const*);
    resetDynamics();
    hideModelBySwitch();
    showModelBySwitch();
    endDemo();
    exeDelay();
    exeAction();
};

} 
