#pragma once

namespace al { 

class CameraStateRailMoveMovie
{
public:
    CameraStateRailMoveMovie(char const*, al::CameraPoser*);
    initByPlacementObj(al::PlacementInfo const&);
    loadParam(al::ByamlIter const&);
    appear();
    update();
    exeMoveStart();
    exeMove();
    exeWait();
    exeAfter();
    ~CameraStateRailMoveMovie();
};

} 
