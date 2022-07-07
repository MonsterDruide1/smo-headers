#pragma once

namespace agl { namespace utl { 

class TextureDataEx
{
public:
    isSame(sead::SafeStringBase<char> const&, agl::TextureFormat, agl::TextureType, unsigned int, unsigned int, agl::MultiSampleType, unsigned int, int, unsigned int) const;
    initialize(agl::TextureFormat, agl::TextureType, unsigned int, unsigned int, unsigned int, agl::MultiSampleType, unsigned int, agl::GPUMemVoidAddr*, unsigned int);
    reset(agl::DrawContext*, sead::SafeStringBase<char> const&, bool, unsigned int);
    comp(agl::utl::TextureDataEx const*, agl::utl::TextureDataEx const*);
    genMessage(sead::hostio::Context*);
    TextureDataEx();
    clear();
};

} } 
