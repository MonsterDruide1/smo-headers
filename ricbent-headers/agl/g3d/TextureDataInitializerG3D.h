#pragma once

namespace agl { namespace g3d { namespace TextureDataInitializerG3D {

initialize(agl::TextureData*, void*, int);
initialize(agl::TextureData*, nn::gfx::ResTexture&);
initialize(agl::TextureData*, void*, sead::SafeStringBase<char> const&);

} } } 
