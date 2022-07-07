#pragma once

namespace al { 

class LutTexture
{
public:
    LutTexture(agl::TextureFormat, unsigned int, unsigned int, unsigned int);
    create();
    ~LutTexture();
    createDisplayList(agl::DrawContext*, agl::SamplerLocation const&, sead::Heap*);
    initTexData();
    initCore();
    storeU16(unsigned short, int);
    reinit();
};

} 
