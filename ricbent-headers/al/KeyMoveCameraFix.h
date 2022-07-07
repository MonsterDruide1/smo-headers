#pragma once

namespace al { 

class KeyMoveCameraFix
{
public:
    KeyMoveCameraFix(char const*);
    loadParam(al::ByamlIter const&);
    start(al::CameraStartInfo const&);
    update();
};

} 
