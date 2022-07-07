#pragma once

namespace agl { namespace g3d { namespace MaterialObj {

GetResTexture(nn::g3d::MaterialObj*, int);
GetResTexture(nn::g3d::MaterialObj const*, int);
GetResTextureName(nn::g3d::MaterialObj const*, int);
SetResTexture(nn::g3d::MaterialObj*, int, nn::gfx::ResTexture*);
ClearTexture(nn::g3d::MaterialObj*);
Map(nn::g3d::MaterialObj*, int);
FlushAndUnmap(nn::g3d::MaterialObj*, int);

} } } 
