#pragma once

namespace agl { namespace sdw { namespace SSAO { 

class Context
{
public:
    Context();
    ~Context();
    allocTexture(agl::DrawContext*, agl::TextureFormat, int, int, int, bool);
};

} } } 
