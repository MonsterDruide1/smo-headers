#pragma once

namespace agl { namespace g3d { namespace ResMaterial {

GetTexture(nn::g3d::ResMaterial*, int);
GetTexture(nn::g3d::ResMaterial const*, int);
ForceBindTexture(nn::g3d::ResMaterial*, int, nn::gfx::ResTexture const*);
GetTextureName(nn::g3d::ResMaterial const*, int);
ReleaseTexture(nn::g3d::ResMaterial*, int);

} } } 
