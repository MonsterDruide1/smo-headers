#pragma once

namespace agl { namespace utl { 

class ColorCorrectionFilter
{
public:
    ColorCorrectionFilter(int);
    ~ColorCorrectionFilter();
    doInitialize_(sead::Heap*);
    doDestroy_();
    doDraw_(agl::DrawContext*, agl::utl::MultiFilterDrawContext*) const;
    doResetParameters_();
    doGenMessage_(sead::hostio::Context*);
    doListenPropertyEvent_(sead::hostio::PropertyEvent const*);
};

} } 
