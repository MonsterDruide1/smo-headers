#pragma once

namespace al { 

class CameraPoserLookDown
{
public:
    CameraPoserLookDown(char const*);
    loadParam(al::ByamlIter const&);
    start(al::CameraStartInfo const&);
    update();
    makeLookAtCamera(sead::LookAtCamera*) const;
};

} 
