#pragma once

namespace al { 

class CameraPoserActorRailParallel
{
public:
    CameraPoserActorRailParallel(char const*, al::RailKeeper const*);
    init();
    loadParam(al::ByamlIter const&);
    start(al::CameraStartInfo const&);
    update();
};

} 
