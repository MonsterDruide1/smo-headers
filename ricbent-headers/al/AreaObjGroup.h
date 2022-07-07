#pragma once

namespace al { 

class AreaObjGroup
{
public:
    AreaObjGroup(char const*, int);
    incrementCount();
    createBuffer();
    createBuffer(int);
    registerAreaObj(al::AreaObj*);
    getAreaObj(int) const;
    getInVolumeAreaObj(sead::Vector3<float> const&) const;
};

} 
