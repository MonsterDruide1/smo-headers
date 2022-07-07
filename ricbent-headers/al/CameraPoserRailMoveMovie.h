#pragma once

namespace al { 

class CameraPoserRailMoveMovie
{
public:
    CameraPoserRailMoveMovie(char const*);
    initByPlacementObj(al::PlacementInfo const&);
    loadParam(al::ByamlIter const&);
    start(al::CameraStartInfo const&);
    exeMove();
};

} 
