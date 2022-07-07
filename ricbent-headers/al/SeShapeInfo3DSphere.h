#pragma once

namespace al { 

class SeShapeInfo3DSphere
{
public:
    createInfo(al::ByamlIter const&);
    SeShapeInfo3DSphere();
    SeShapeInfo3DSphere(al::SeShapeInfo const&);
    SeShapeInfo3DSphere(al::SeShapeInfo3DSphere const&);
    ~SeShapeInfo3DSphere();
};

} 
