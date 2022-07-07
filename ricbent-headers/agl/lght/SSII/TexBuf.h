#pragma once

namespace agl { namespace lght { namespace SSII { namespace TexBuf {

init(agl::DrawContext*, agl::lght::SSII::BufType, unsigned int, unsigned int, char const*, bool) const;
init(agl::DrawContext*, agl::TextureData const*, unsigned int, unsigned int) const;
free() const;

} } } } 
