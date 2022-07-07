#pragma once

namespace nn { namespace vfx { namespace detail { namespace Shader {

Finalize();
Invalidate();
InitializeShader(nn::gfx::ResShaderVariation*, nn::gfx::ShaderCodeType);
InitializeSamplerSlot();
InitializeConstantBufferSlot();
BindCustomShaderUniformBlock(nn::gfx::TCommandBuffer<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*, nn::vfx::CustomShaderConstantBufferIndex, nn::gfx::GpuAddress*, unsigned long);

} } } } 
