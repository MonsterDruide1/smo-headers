#pragma once

namespace agl { namespace utl { 

class ReduceFilter
{
public:
    ReduceFilter(int);
    ~ReduceFilter();
    doDraw_(agl::DrawContext*, agl::utl::MultiFilterDrawContext*) const;
    drawReduce_(agl::DrawContext*, agl::utl::MultiFilterDrawContext*, agl::utl::MultiFilterUnit::FilterScale) const;
    doCalcResultInfo_(agl::utl::MultiFilterResultInfo*) const;
    doResetParameters_();
    doGenMessage_(sead::hostio::Context*);
};

} } 
