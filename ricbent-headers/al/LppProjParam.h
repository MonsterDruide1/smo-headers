#pragma once

namespace al { 

class LppProjParam
{
public:
    LppProjParam(al::ParameterObj*);
    initByInfo(al::ActorInitInfo const&);
    calcLength() const;
};

} 
