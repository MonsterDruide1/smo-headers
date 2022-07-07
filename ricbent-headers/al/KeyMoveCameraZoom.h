#pragma once

namespace al { 

class KeyMoveCameraZoom
{
public:
    KeyMoveCameraZoom(char const*);
    initByPlacementObj(al::PlacementInfo const&);
    loadParam(al::ByamlIter const&);
    update();
};

} 
