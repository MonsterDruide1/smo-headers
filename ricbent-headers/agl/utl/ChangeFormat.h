#pragma once

namespace agl { namespace utl { 

class ChangeFormat
{
public:
    ChangeFormat(int);
    ~ChangeFormat();
    doDraw_(agl::DrawContext*, agl::utl::MultiFilterDrawContext*) const;
    doCalcResultInfo_(agl::utl::MultiFilterResultInfo*) const;
    doResetParameters_();
    doGenMessage_(sead::hostio::Context*);
};

} } 
