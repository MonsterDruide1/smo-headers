#pragma once

namespace al { 

class CameraPoserLookBoard
{
public:
    CameraPoserLookBoard(char const*);
    init();
    loadParam(al::ByamlIter const&);
    start(al::CameraStartInfo const&);
};

} 
