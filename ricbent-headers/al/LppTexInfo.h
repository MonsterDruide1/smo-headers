#pragma once

namespace al { 

class LppTexInfo
{
public:
    LppTexInfo(al::ParameterObj*);
    initByInfo(al::ActorInitInfo const&);
    updateTexOffset();
};

} 
