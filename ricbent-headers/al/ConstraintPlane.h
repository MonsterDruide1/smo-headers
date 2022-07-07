#pragma once

namespace al { 

class ConstraintPlane
{
public:
    ConstraintPlane(al::ByamlIter const&);
    updatePlaneNormal();
    update(al::LiveActor const*);
    enforceIfNecessary(sead::Vector3<float>&);
};

} 
