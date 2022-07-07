#pragma once

namespace agl { namespace pfx { namespace Bloom { 

class MRT
{
public:
    free(agl::utl::DynamicTextureCache*);
    entry(agl::DrawContext*, int, agl::utl::DebugTexturePage const&) const;
    MRT();
};

} } } 
