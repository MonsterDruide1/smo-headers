#pragma once

namespace al { 

class LayoutResource
{
public:
    LayoutResource(al::Resource const*, al::LayoutSystem const*, bool);
    addResourceLink(al::Resource const*);
    FindResourceByName(unsigned long*, unsigned int, char const*);
    Finalize(nn::gfx::TDevice<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*);
    AcquireFont(nn::gfx::TDevice<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*, char const*);
    ~LayoutResource();
};

} 
