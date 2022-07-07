#pragma once

namespace al { 

class ActorBackAroundCameraSubTarget
{
public:
    ActorBackAroundCameraSubTarget(al::LiveActor const*);
    calcTrans(sead::Vector3<float>*) const;
    getTargetName() const;
};

} 
