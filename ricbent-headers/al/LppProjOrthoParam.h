#pragma once

namespace al { 

class LppProjOrthoParam
{
public:
    LppProjOrthoParam(al::ParameterObj*);
    initByInfo(al::ActorInitInfo const&);
    calcSizeXZ(float*, float*) const;
    calcLength() const;
};

} 
