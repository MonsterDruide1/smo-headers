#pragma once

namespace al { 

class ModelShader
{
public:
    ModelShader();
    ~ModelShader();
    init(nn::g3d::ModelObj const*, nn::g3d::ShapeObj const*, nn::g3d::MaterialObj const*, nn::g3d::ResShadingModel*, int, al::ShaderHolder*, al::GpuMemAllocator*, bool, int, char const* const*, char const* const*, al::ModelShaderOptionCache*);
    search(nn::g3d::ShaderSelector*, nn::g3d::ShadingModelObj*, nn::g3d::ShapeObj const*, nn::g3d::MaterialObj const*, int, char const* const*, char const* const*, al::ModelShaderOptionCache*);
    requestDynamicVariaton(char const*, char const*);
    tryUpdateDynamicVariation();
    getShaderSelector() const;
    getShadingModel() const;
    getShaderProgram() const;
    getResShadingModel() const;
    getShadingModelName() const;
    getUberShaderSelector() const;
    checkShaderUber() const;
};

} 
