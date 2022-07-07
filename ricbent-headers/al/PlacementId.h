#pragma once

namespace al { 

class PlacementId
{
public:
    PlacementId();
    PlacementId(char const*, char const*, char const*);
    init(al::PlacementInfo const&);
    isEqual(al::PlacementId const&) const;
    isEqual(al::PlacementId const&, al::PlacementId const&);
    isValid() const;
    makeString(sead::BufferedSafeStringBase<char>*) const;
};

} 
