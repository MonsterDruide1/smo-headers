#pragma once

namespace agl { namespace TextureDataInitializerTGA {

checkTGAHeader(void const*);
checkTGAHeader(void const*, int, int, int);
initialize(agl::TextureData*, void*, unsigned long, sead::Heap*);
initializeTiling_(agl::TextureData*, void*, agl::TextureDataInitializerTGA::TGAData const&, sead::Heap*);
initialize(agl::TextureData*, sead::Heap*, void const*, sead::Heap*);
initializeLinearAligned(agl::TextureData*, void*, unsigned long, sead::Heap*);
initializeLinearAligned(agl::TextureData*, sead::Heap*, void const*, sead::Heap*);
initializeLinearAligned_(agl::TextureData*, agl::GPUMemVoidAddr, agl::TextureDataInitializerTGA::TGAData const&, sead::Heap*);

} } 
