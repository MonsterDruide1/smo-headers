#pragma once

namespace agl { namespace TextureDataInitializerGTX {

checkFileHeader(void const*);
checkBlockHeader(void const*);
initialize(agl::TextureData*, void*, unsigned int, agl::GPUMemBlock<unsigned char>**, sead::Heap*);

} } 
