#pragma once

namespace al { 

class BgmRegionChangeParams
{
public:
    BgmRegionChangeParams();
    BgmRegionChangeParams(al::BgmRegionChangeParams const&);
    operator=(al::BgmRegionChangeParams const&);
    operator==(al::BgmRegionChangeParams const&) const;
};

} 
