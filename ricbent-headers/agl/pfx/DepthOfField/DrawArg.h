#pragma once

namespace agl { namespace pfx { namespace DepthOfField { 

class DrawArg
{
public:
    DrawArg(int, agl::pfx::DepthOfField::Context&, agl::pfx::DepthOfFieldParameter const&, agl::RenderBuffer const&, agl::TextureData const&, bool, float, float);
};

} } } 
