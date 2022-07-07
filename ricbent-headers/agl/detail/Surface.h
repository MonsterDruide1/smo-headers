#pragma once

namespace agl { namespace detail { 

class Surface
{
public:
    Surface();
    initialize(agl::TextureType, agl::TextureFormat, unsigned int, agl::TextureAttribute, agl::MultiSampleType);
    initializeSize(unsigned int, unsigned int, unsigned int);
    copyFrom(agl::detail::SurfaceBase const&);
    calcSizeAndAlignment();
    setupNVNtextureBuilder(NVNtextureBuilder*) const;
    printInfo() const;
    copyFrom(NVNtexture const&);
};

} } 
