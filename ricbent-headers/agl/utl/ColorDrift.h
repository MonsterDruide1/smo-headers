#pragma once

namespace agl { namespace utl { 

class ColorDrift
{
public:
    ColorDrift(int);
    ~ColorDrift();
    doResetParameters_();
    doDraw_(agl::DrawContext*, agl::utl::MultiFilterDrawContext*) const;
    doGenMessage_(sead::hostio::Context*);
};

} } 
