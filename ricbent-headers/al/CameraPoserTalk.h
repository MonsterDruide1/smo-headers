#pragma once

namespace al { 

class CameraPoserTalk
{
public:
    CameraPoserTalk(char const*);
    init();
    loadParam(al::ByamlIter const&);
    start(al::CameraStartInfo const&);
    setMinDistance(float);
};

} 
