#pragma once

namespace al { 

class CameraPoserQuickTurn
{
public:
    CameraPoserQuickTurn(char const*);
    init();
    loadParam(al::ByamlIter const&);
    makeLookAtCamera(sead::LookAtCamera*) const;
    setFollow();
    exeFollow();
    reset();
    exeRace();
    calcTargetFrontLocal(sead::Vector3<float>*, bool) const;
    start(al::CameraStartInfo const&);
};

} 
