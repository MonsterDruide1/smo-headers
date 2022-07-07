#pragma once

namespace al { 

class DemoDirector
{
public:
    addDemoActorWithSubActor(al::LiveActor*);
    addDemoActor(al::LiveActor*);
    DemoDirector(int);
    endInit(al::ActorInitInfo const&);
    isActiveDemo() const;
    getActiveDemoName() const;
    requestStartDemo(char const*);
    requestEndDemo(char const*);
    tryAddDemoActor(al::LiveActor*);
    getDemoActorList() const;
    getDemoActorNum() const;
    updateDemoActor(al::EffectSystem*);
    registDemoRequesterToAddDemoInfo(al::PlacementId const&);
    findOrCreateAddDemoInfo(al::PlacementId const&);
    registActorToAddDemoInfo(al::LiveActor*, al::PlacementId const&);
    tryFindAddDemoInfo(al::PlacementId const&) const;
    findAddDemoInfo(al::PlacementId const&) const;
    startDemo(char const*);
    endDemo(char const*);
};

} 
