#pragma once

namespace al { 

class CubeMapUnitInfo
{
public:
    isEmpty() const;
    CubeMapUnitInfo(al::ShaderCubeMapKeeper*, agl::utl::ParameterList*, char const*);
    ~CubeMapUnitInfo();
};

} 
