#pragma once

namespace agl { namespace g3d { namespace ResMaterialAnim {

GetTexture(nn::g3d::ResMaterialAnim*, int);
GetTexture(nn::g3d::ResMaterialAnim const*, int);
GetTextureName(nn::g3d::ResMaterialAnim const*, int);
GetTextureCount(nn::g3d::ResMaterialAnim const*);
ForceBindTexture(nn::g3d::ResMaterialAnim*, int, nn::gfx::ResTexture const*);
ReleaseTexture(nn::g3d::ResMaterialAnim*, int);

} } } 
