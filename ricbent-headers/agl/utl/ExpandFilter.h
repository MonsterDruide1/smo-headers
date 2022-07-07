#pragma once

namespace agl { namespace utl { 

class ExpandFilter
{
public:
    ExpandFilter(int);
    ~ExpandFilter();
    doDraw_(agl::DrawContext*, agl::utl::MultiFilterDrawContext*) const;
    drawExpand_(agl::DrawContext*, agl::utl::MultiFilterDrawContext*, agl::utl::MultiFilterUnit::FilterScale) const;
    doResetParameters_();
    doCalcResultInfo_(agl::utl::MultiFilterResultInfo*) const;
    doGenMessage_(sead::hostio::Context*);
};

} } 
