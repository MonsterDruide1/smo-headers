#pragma once

namespace al { 

class BloomParam
{
public:
    BloomParam();
    isEqual(al::BloomParam const&);
    isEnable() const;
    getReduceScale() const;
    copy(al::BloomParam const&);
    copyInterp(al::BloomParam const&, al::BloomParam const&, float);
};

} 
