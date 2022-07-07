#pragma once

namespace al { 

class DepthOfFieldParam
{
public:
    DepthOfFieldParam();
    isEqual(al::DepthOfFieldParam const&);
    copy(al::DepthOfFieldParam const&);
    copyInterp(al::DepthOfFieldParam const&, al::DepthOfFieldParam const&, float);
    isEnable() const;
    isUseDepthUnderOne() const;
    getDepthStartSingle() const;
    getDepthEndSingle() const;
    getIndirectTextureScale() const;
};

} 
