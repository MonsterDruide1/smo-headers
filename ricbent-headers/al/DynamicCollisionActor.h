#pragma once

namespace al { 

class DynamicCollisionActor
{
public:
    DynamicCollisionActor(al::ActorInitInfo const&, int, sead::Matrix34<float> const*, al::HitSensor*, void const*);
    create(int);
    begin();
    vertex(sead::Vector3<float> const&);
    endData();
    updateCollisionParts();
    attribute(unsigned short);
    makePrism();
    end();
};

} 
