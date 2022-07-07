#pragma once

namespace nn { namespace gfx { namespace ShaderInfo {

SetDefault();
SetShaderCodePtr(nn::gfx::ShaderStage, void const*);
GetShaderCodePtr(nn::gfx::ShaderStage) const;

} } } 
