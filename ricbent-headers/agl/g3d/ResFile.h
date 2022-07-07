#pragma once

namespace agl { namespace g3d { namespace ResFile {

Setup(nn::g3d::ResFile*);
getResTextureFile(nn::g3d::ResFile*);
Cleanup(nn::g3d::ResFile*);
GetTextureName(nn::g3d::ResFile const*, int);
getResTextureFile(nn::g3d::ResFile const*);
GetTextureCount(nn::g3d::ResFile const*);
GetTextureIndex(nn::g3d::ResFile const*, char const*);
GetTexture(nn::g3d::ResFile*, char const*);
GetTexture(nn::g3d::ResFile const*, char const*);
GetTexture(nn::g3d::ResFile*, int);
GetTexture(nn::g3d::ResFile const*, int);
BindTexture(nn::g3d::ResFile*, nn::g3d::ResFile const*);
TextureBindCallback(char const*, void*);

} } } 
