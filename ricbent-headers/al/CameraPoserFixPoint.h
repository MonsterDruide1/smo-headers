#pragma once

namespace al { 

class CameraPoserFixPoint
{
public:
    CameraPoserFixPoint(char const*);
    init();
    loadParam(al::ByamlIter const&);
    start(al::CameraStartInfo const&);
    update();
    makeLookAtCamera(sead::LookAtCamera*) const;
};

} 
