#pragma once

namespace al { namespace TargetColors {

applyColors(agl::RenderBuffer*, agl::TextureData const*, agl::TextureData const*, agl::TextureData const*, agl::TextureData const*);
applyColorsLayer(agl::RenderBuffer*, int, agl::TextureData const*, agl::TextureData const*, agl::TextureData const*, agl::TextureData const*);
finalize(agl::DrawContext*);
invalidateGpuCacheWrite(agl::DrawContext*);

} } 
