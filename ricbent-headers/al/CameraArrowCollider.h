#pragma once

namespace al { 

class CameraArrowCollider
{
public:
    CameraArrowCollider(al::CollisionDirector*);
    start();
    update(sead::Vector3<float> const&, sead::Vector3<float> const&, sead::Vector3<float> const&);
    pushBackCollisionParts(al::CollisionParts*);
    makeLookAtCamera(sead::LookAtCamera*) const;
    getPushLength() const;
    exeKeep();
    exeShrink();
    isShrink() const;
    ~CameraArrowCollider();
    getCollisionDirector() const;
};

} 
