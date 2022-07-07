#pragma once

namespace al { 

class CameraPoserRailMoveLookAt
{
public:
    CameraPoserRailMoveLookAt(char const*);
    init();
    initByPlacementObj(al::PlacementInfo const&);
    loadParam(al::ByamlIter const&);
    start(al::CameraStartInfo const&);
    update();
};

} 
