#pragma once

namespace al { 

class SeShapeInfo3DPlane
{
public:
    createInfo(al::ByamlIter const&);
    SeShapeInfo3DPlane();
    SeShapeInfo3DPlane(al::SeShapeInfo const&);
    SeShapeInfo3DPlane(al::SeShapeInfo3DPlane const&);
    ~SeShapeInfo3DPlane();
};

} 
