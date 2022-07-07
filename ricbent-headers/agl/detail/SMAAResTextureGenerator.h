#pragma once

namespace agl { namespace detail { namespace SMAAResTextureGenerator {

calcAreaPixel(int, int);
getAreaTextureImageByteSize();
setupAreaTexture(agl::TextureData&, agl::GPUMemVoidAddr, unsigned long, sead::Heap*);
calcSearchEdgeFromKey(unsigned int, sead::Vector4<unsigned int>*);
findSearchEdgeByTable(unsigned int);
calcSearchPixel(int, int, bool);
getSearchTextureImageByteSize();
setupSearchTexture(agl::TextureData&, agl::GPUMemVoidAddr, unsigned long, sead::Heap*);

} } } 
