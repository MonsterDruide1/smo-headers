#pragma once

namespace agl { namespace utl { 

class Trimming
{
public:
    Trimming(int);
    ~Trimming();
    doResetParameters_();
    doDraw_(agl::DrawContext*, agl::utl::MultiFilterDrawContext*) const;
    doCalcResultInfo_(agl::utl::MultiFilterResultInfo*) const;
    doGenMessage_(sead::hostio::Context*);
};

} } 
