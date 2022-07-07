#pragma once

namespace al { 

class CameraVerticalAbsorber2DGalaxy
{
public:
    CameraVerticalAbsorber2DGalaxy();
    start(al::CameraPoser const*);
    update(al::CameraPoser const*);
    applyLimit(sead::Vector3<float>*) const;
    exeNone();
    exeGround();
    exeLimit();
    exeLimitOver();
    exeLimitAfter();
    ~CameraVerticalAbsorber2DGalaxy();
};

} 
