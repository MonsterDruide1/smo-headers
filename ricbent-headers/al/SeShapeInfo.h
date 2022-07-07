#pragma once

namespace al { 

class SeShapeInfo
{
public:
    SeShapeInfo(char const*);
    SeShapeInfo(al::SeShapeInfo const&);
    createInfo(al::ByamlIter const&);
    createInfo(al::SeShapeInfo*);
    applyCurveNameToType();
    ~SeShapeInfo();
    dummy();
};

} 
