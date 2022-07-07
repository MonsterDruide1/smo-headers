#pragma once

namespace al { 

class SeShapeInfo3DRing
{
public:
    createInfo(al::ByamlIter const&);
    SeShapeInfo3DRing();
    SeShapeInfo3DRing(al::SeShapeInfo const&);
    SeShapeInfo3DRing(al::SeShapeInfo3DRing const&);
    ~SeShapeInfo3DRing();
};

} 
