#pragma once

namespace al { 

class CameraPoserShooterSingle
{
public:
    CameraPoserShooterSingle(char const*);
    loadParam(al::ByamlIter const&);
    update();
};

} 
