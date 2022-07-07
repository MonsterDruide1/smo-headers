#pragma once

namespace agl { namespace pfx { namespace DepthOfField { 

class TempVignetting
{
public:
    ~TempVignetting();
    TempVignetting(agl::pfx::DepthOfField*, int, sead::SafeStringBase<char> const&);
    postRead_();
    preWrite_() const;
};

} } } 
