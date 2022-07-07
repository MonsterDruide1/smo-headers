#pragma once

namespace al { 

class HitInfo
{
public:
    HitInfo();
    isCollisionAtFace() const;
    isCollisionAtEdge() const;
    isCollisionAtCorner() const;
    tryGetHitEdgeNormal() const;
};

} 
