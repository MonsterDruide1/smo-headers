#pragma once

namespace agl { namespace TextureTileConverter {

calcByteSize(agl::TextureType, agl::TextureFormat, int, int, int, int, agl::TextureTileConverter::Mode);
convert(agl::GPUMemVoidAddr, unsigned int, agl::GPUMemVoidAddr, unsigned int, agl::TextureTileConverter::Mode, agl::ConstGPUMemVoidAddr, agl::ConstGPUMemVoidAddr, agl::TextureTileConverter::Mode, agl::TextureType, agl::TextureFormat, int, int, int, int);

} } 
