#pragma once

namespace al { 

class CameraPoserRace
{
public:
    CameraPoserRace(char const*);
    init();
    loadParam(al::ByamlIter const&);
    start(al::CameraStartInfo const&);
    calcTargetFrontLocal(sead::Vector3<float>*, bool) const;
    update();
};

} 
