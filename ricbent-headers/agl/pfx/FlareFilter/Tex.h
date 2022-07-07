#pragma once

namespace agl { namespace pfx { namespace FlareFilter { namespace Tex {

alloc(agl::DrawContext*, agl::TextureFormat, unsigned int, unsigned int, char const*, bool) const;
refer(agl::DrawContext*, agl::TextureData const*) const;
release() const;

} } } } 
