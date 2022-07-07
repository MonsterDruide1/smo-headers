#pragma once

namespace al { 

class GateMapParts
{
public:
    GateMapParts(char const*);
    init(al::ActorInitInfo const&);
    start();
    appearAndSetStart();
    exeWait();
    exeOpen();
    updatePose(float);
    exeBound();
    exeEnd();
};

} 
