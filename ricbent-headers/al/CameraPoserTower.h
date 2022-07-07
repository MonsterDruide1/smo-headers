#pragma once

namespace al { 

class CameraPoserTower
{
public:
    CameraPoserTower(char const*, sead::Vector3<float> const*);
    init();
    initByPlacementObj(al::PlacementInfo const&);
    loadParam(al::ByamlIter const&);
    start(al::CameraStartInfo const&);
    movement();
    update();
    resetInputRotate(float, int);
    makeLookAtCamera(sead::LookAtCamera*) const;
    exeTower();
    exeTowerInput();
    exeFollow();
};

} 
