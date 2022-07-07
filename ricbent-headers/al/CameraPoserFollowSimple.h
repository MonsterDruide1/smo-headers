#pragma once

namespace al { 

class CameraPoserFollowSimple
{
public:
    CameraPoserFollowSimple(char const*);
    loadParam(al::ByamlIter const&);
    start(al::CameraStartInfo const&);
    reset();
    update();
};

} 
