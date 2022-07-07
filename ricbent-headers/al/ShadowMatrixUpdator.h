#pragma once

namespace al { 

class ShadowMatrixUpdator
{
public:
    ShadowMatrixUpdator();
    updateShadowMatrix(float);
    getDrawCameraViewMtx() const;
    getDrawProjectionMtx() const;
};

} 
