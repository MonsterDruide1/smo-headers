#pragma once

namespace al { 

class FlareFilterParam
{
public:
    FlareFilterParam();
    isEqual(al::FlareFilterParam const&);
    copy(al::FlareFilterParam const&);
    copyInterp(al::FlareFilterParam const&, al::FlareFilterParam const&, float);
};

} 
