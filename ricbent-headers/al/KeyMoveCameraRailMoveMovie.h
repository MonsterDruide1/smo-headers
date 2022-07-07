#pragma once

namespace al { 

class KeyMoveCameraRailMoveMovie
{
public:
    KeyMoveCameraRailMoveMovie(char const*);
    initByPlacementObj(al::PlacementInfo const&);
    loadParam(al::ByamlIter const&);
    start(al::CameraStartInfo const&);
    isEndKeyMoveCamera() const;
    exeMove();
    exeAfter();
    exeEnd();
};

} 
