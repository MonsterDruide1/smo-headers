#pragma once

namespace al { 

class CameraPoserParallelSimple
{
public:
    CameraPoserParallelSimple(char const*);
    init();
    loadParam(al::ByamlIter const&);
    update();
};

} 
