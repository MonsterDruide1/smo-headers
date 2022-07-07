#pragma once

namespace al { 

class TextureReplacer
{
public:
    TextureReplacer(agl::TextureData const*);
    TextureReplacer();
    setup(agl::TextureData const*);
    replace(al::LiveActor*, char const*, char const*);
    update();
};

} 
