#pragma once

namespace al { 

class ViewIdHolder
{
public:
    tryCreate(al::PlacementInfo const&);
    init(al::PlacementInfo const&);
    getViewId(int) const;
    ViewIdHolder();
};

} 
