#pragma once

namespace al { 

class SeShapeInfo3DPoint
{
public:
    createInfo(al::ByamlIter const&);
    SeShapeInfo3DPoint();
    SeShapeInfo3DPoint(al::SeShapeInfo const&);
    SeShapeInfo3DPoint(al::SeShapeInfo3DPoint const&);
    ~SeShapeInfo3DPoint();
};

} 
