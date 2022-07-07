#pragma once

namespace al { 

class DemoActionList
{
public:
    DemoActionList();
    init(al::ActorInitInfo const&, char const*);
    initSerial(al::ActorInitInfo const&);
    getActionName(int) const;
    getActionDelay(int) const;
    startAction(al::LiveActor*, int);
};

} 
