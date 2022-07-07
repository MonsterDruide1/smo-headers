#pragma once

namespace al { 

class CameraCollisionPartsFilter
{
public:
    CameraCollisionPartsFilter();
    isInvalidParts(al::CollisionParts const&) const;
};

} 
