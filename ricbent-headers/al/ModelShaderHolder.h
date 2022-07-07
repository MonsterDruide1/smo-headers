#pragma once

namespace al { 

class ModelShaderHolder
{
public:
    ModelShaderHolder(al::GraphicsSystemInfo*);
    ~ModelShaderHolder();
    createShader(al::ModelCtrl*, int, al::ModelShaderHolder::SHADER_TYPE, char const*, nn::g3d::ResShadingModel*, int, char const* const*, char const* const*);
    tryFindShaderOptionCache(nn::g3d::ResShaderAssign const*, char const*) const;
    createShader(al::ModelCtrl*, nn::g3d::ShapeObj const*, al::ModelShaderHolder::SHADER_TYPE, char const*, nn::g3d::ResShadingModel*, int, char const* const*, char const* const*);
    requestChangeVariaton(al::ModelShaderHolder::SHADER_TYPE, al::ModelCtrl*, int, char const*, char const*) const;
    requestChangeVariatonAll(char const*, char const*);
};

} 
