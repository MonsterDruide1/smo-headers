#pragma once

namespace nn { namespace g3d { namespace ShaderUtility {

InitializeShaderKey(unsigned int*, int, nn::g3d::ResShadingModel const*, nn::g3d::ResShaderAssign const*, bool);
InitializeShaderKey(nn::g3d::ShadingModelObj*, nn::g3d::ResShaderAssign const*, bool);
BindShaderParam(nn::g3d::ResMaterial*, nn::g3d::ResShadingModel const*);
InitializeShaderParam(nn::g3d::MaterialObj*, nn::g3d::ResShadingModel const*);

} } } 
