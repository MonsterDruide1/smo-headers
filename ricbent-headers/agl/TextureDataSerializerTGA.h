#pragma once

namespace agl { namespace TextureDataSerializerTGA {

serialize(agl::DrawContext*, agl::TextureDataSerializeInfo*, agl::TextureDataSerializerTGA::TGAFormat, bool, agl::TextureData const&, sead::Heap*, sead::Heap*);
serialize_(agl::DrawContext*, agl::TextureDataSerializeInfo*, agl::TextureDataSerializerTGA::TGAFormat, bool, agl::TextureData const&, sead::Heap*, sead::Heap*);
serializeWithDebugHeap(agl::DrawContext*, agl::TextureDataSerializeInfo*, agl::TextureDataSerializerTGA::TGAFormat, bool, agl::TextureData const&, sead::Heap*);

} } 
