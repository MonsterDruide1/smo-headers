#pragma once

namespace agl { namespace pfx { namespace AutoExposure { namespace ResultBuffer {

Create(sead::Heap*, int, int, agl::TextureFormat);
Bind(agl::DrawContext*);
Clear(agl::DrawContext*, sead::Color4f const&);

} } } } 
