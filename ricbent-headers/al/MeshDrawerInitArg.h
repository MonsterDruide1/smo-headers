#pragma once

namespace al { 

class MeshDrawerInitArg
{
public:
    MeshDrawerInitArg(char const*, al::GraphicsSystemInfo const*, nn::g3d::ModelObj const*, nn::g3d::ShapeObj const*, al::ModelShader*, int);
};

} 
