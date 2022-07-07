#pragma once

namespace agl { namespace g3d { namespace ShaderUtilG3D {

load(agl::DrawContext*, agl::ShaderLocation const&, nn::gfx::TBuffer<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > > const&, unsigned long, int);
load(agl::DrawContext*, agl::ShaderLocation const&, unsigned int const&, unsigned int const&);
search(agl::UniformBlockLocation*, nn::g3d::ResShadingModel const*, nn::g3d::ResShaderProgram const*, sead::SafeStringBase<char> const&);
searchUniformBlock(agl::ShaderLocation*, nn::g3d::ResShadingModel const*, nn::g3d::ResShaderProgram const*, sead::SafeStringBase<char> const&);
search(agl::SamplerLocation*, nn::g3d::ResShadingModel const*, nn::g3d::ResShaderProgram const*, sead::SafeStringBase<char> const&);
searchSampler(agl::ShaderLocation*, nn::g3d::ResShadingModel const*, nn::g3d::ResShaderProgram const*, sead::SafeStringBase<char> const&);
print(nn::g3d::ShadingModelObj const&, nn::g3d::ShaderSelector const&);

} } } 
