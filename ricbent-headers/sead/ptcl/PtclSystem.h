#pragma once

namespace sead { namespace ptcl { 

class PtclSystem
{
public:
    PtclSystem(sead::ptcl::Config const&);
    ~PtclSystem();
    beginRender(nn::gfx::TCommandBuffer<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8> > >*, sead::Matrix44<float> const&, sead::Matrix34<float> const&, sead::Vector3<float> const&, float, float, float);
};

} } 
