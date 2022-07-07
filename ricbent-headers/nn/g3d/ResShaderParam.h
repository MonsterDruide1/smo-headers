#pragma once

namespace nn { namespace g3d { namespace ResShaderParam {

Convert<true>(void*, void const*) const;
Convert<false>(void*, void const*) const;
GetSize(nn::g3d::ResShaderParam::Type);
GetSrcSize(nn::g3d::ResShaderParam::Type);
SetDependPointer(void*, void const*) const;
GetDependPointer(void**, void const*) const;
ConvertSrt2dCallback(void*, void const*, nn::g3d::ResShaderParam const*, void const*);
ConvertSrt3dCallback(void*, void const*, nn::g3d::ResShaderParam const*, void const*);
ConvertSrt2dExCallback(void*, void const*, nn::g3d::ResShaderParam const*, void const*);
ConvertTexSrtCallback(void*, void const*, nn::g3d::ResShaderParam const*, void const*);
ConvertTexSrtExCallback(void*, void const*, nn::g3d::ResShaderParam const*, void const*);

} } } 
