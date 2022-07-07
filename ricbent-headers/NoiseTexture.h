#pragma once

namespace NoiseTexture {

updateUbo();
clearColorOnly(agl::DrawContext*, sead::Color4f const&) const;
drawToTexture(agl::DrawContext*, agl::ShaderProgram const*, al::FullScreenTriangle*, char const*, al::CubeMapDrawInfo*);

} 
