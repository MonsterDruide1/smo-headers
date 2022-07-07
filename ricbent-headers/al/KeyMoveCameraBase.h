#pragma once

namespace al { 

class KeyMoveCameraBase
{
public:
    KeyMoveCameraBase(char const*);
    load(al::ByamlIter const&);
    start(al::CameraStartInfo const&);
    movement();
    isEndKeyMoveCamera() const;
    calcRate() const;
};

} 
