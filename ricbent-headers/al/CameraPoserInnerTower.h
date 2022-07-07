#pragma once

namespace al { 

class CameraPoserInnerTower
{
public:
    CameraPoserInnerTower(char const*);
    init();
    initByPlacementObj(al::PlacementInfo const&);
    loadParam(al::ByamlIter const&);
    update();
    start(al::CameraStartInfo const&);
};

} 
