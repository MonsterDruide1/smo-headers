#pragma once

namespace al { 

class ActorCollisionController
{
public:
    ActorCollisionController(al::LiveActor*);
    setColliderRadius(float);
    setColliderRadiusScale(float);
    setColliderOffsetY(float);
    update();
    resetToOrigin(int);
};

} 
