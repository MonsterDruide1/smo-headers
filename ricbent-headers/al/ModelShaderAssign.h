#pragma once

namespace al { 

class ModelShaderAssign
{
public:
    ModelShaderAssign();
    clear_();
    ~ModelShaderAssign();
    create(sead::Heap*);
    setBuffer(void*);
    bind(nn::g3d::ResMaterial const*, nn::g3d::ResShape const*, nn::g3d::ResShadingModel const*, nn::g3d::ResShaderProgram const*);
    updateLocation_(nn::g3d::ResMaterial const*, nn::g3d::ResShadingModel const*, char const*);
    activateMaterialUniformBlock(agl::DrawContext*, nn::g3d::MaterialObj const*, int) const;
};

} 
