#pragma once

namespace al { 

class SeShapeInfo3DCube
{
public:
    createInfo(al::ByamlIter const&);
    SeShapeInfo3DCube();
    SeShapeInfo3DCube(al::SeShapeInfo const&);
    SeShapeInfo3DCube(al::SeShapeInfo3DCube const&);
    ~SeShapeInfo3DCube();
};

} 
