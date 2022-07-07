#pragma once

namespace al { 

class CameraParamMoveLimit
{
public:
    create(al::CameraPoser const*);
    load(al::ByamlIter const&);
    apply(sead::LookAtCamera*) const;
    CameraParamMoveLimit();
};

} 
