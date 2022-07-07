#pragma once

namespace al { 

class CameraStartParamArea
{
public:
    CameraStartParamArea(char const*);
    init(al::AreaInitInfo const&);
    appear();
    kill();
};

} 
