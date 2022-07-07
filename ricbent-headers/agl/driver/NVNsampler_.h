#pragma once

namespace agl { namespace driver { 

class NVNsampler_
{
public:
    NVNsampler_();
    ~NVNsampler_();
    releaseSampler();
    NVNsampler_(agl::driver::NVNsampler_ const&);
    operator=(agl::driver::NVNsampler_ const&);
    registerSampler(NVNsampler const&, char const*);
    updateTextureId(int);
};

} } 
