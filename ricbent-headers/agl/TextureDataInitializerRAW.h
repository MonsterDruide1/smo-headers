#pragma once

namespace agl { namespace TextureDataInitializerRAW {

initialize(agl::TextureData*, agl::GPUMemVoidAddr, unsigned long, agl::TextureFormat, int, int, sead::Heap*);
copyTileImage(agl::TextureData*, agl::ConstGPUMemVoidAddr, unsigned int);

} } 
