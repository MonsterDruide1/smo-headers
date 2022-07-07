#pragma once

namespace agl { namespace TextureDataSerializerBMP {

serialize(agl::DrawContext*, agl::TextureDataSerializeInfo*, agl::TextureDataSerializerBMP::BMPFormat, bool, agl::TextureData const&, sead::Heap*, sead::Heap*);
serialize_(agl::DrawContext*, agl::TextureDataSerializeInfo*, agl::TextureDataSerializerBMP::BMPFormat, bool, agl::TextureData const&, sead::Heap*, sead::Heap*, bool);
serializeWithDebugHeap(agl::DrawContext*, agl::TextureDataSerializeInfo*, agl::TextureDataSerializerBMP::BMPFormat, bool, agl::TextureData const&, sead::Heap*);

} } 
