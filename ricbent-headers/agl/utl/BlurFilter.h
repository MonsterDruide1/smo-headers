#pragma once

namespace agl { namespace utl { 

class BlurFilter
{
public:
    BlurFilter(int);
    ~BlurFilter();
    doDraw_(agl::DrawContext*, agl::utl::MultiFilterDrawContext*) const;
    drawBlur_(agl::DrawContext*, agl::utl::MultiFilterDrawContext*, agl::utl::MultiFilterUnit::BlurType, agl::utl::ImageFilter2D::GaussianKernel) const;
    doResetParameters_();
    doGenMessage_(sead::hostio::Context*);
};

} } 
