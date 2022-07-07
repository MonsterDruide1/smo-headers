#pragma once

namespace al { 

class SeShapeInfo3DVector
{
public:
    createInfo(al::ByamlIter const&);
    SeShapeInfo3DVector();
    SeShapeInfo3DVector(al::SeShapeInfo const&);
    SeShapeInfo3DVector(al::SeShapeInfo3DVector const&);
    ~SeShapeInfo3DVector();
};

} 
