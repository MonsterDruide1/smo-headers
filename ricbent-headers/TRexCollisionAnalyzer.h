#pragma once

class TRexCollisionAnalyzer
{
public:
    TRexCollisionAnalyzer(TRex const*, CollisionShapeKeeper const*, TRexFootIK const*, TRexFootIK const*);
    updateSearchFootCollision();
    analyzeCollideHead();
};
