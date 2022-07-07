#pragma once

namespace al { 

class AreaObjDirector
{
public:
    AreaObjDirector();
    init(al::AreaObjFactory const*);
    endInit();
    update();
    placement(al::AreaInitInfo const&);
    placement(al::AreaInitInfo const*, int);
    createAreaObjGroup(al::AreaInitInfo const&);
    createAreaObjGroupBuffer();
    placementAreaObj(al::AreaInitInfo const&);
    getAreaObjGroup(char const*) const;
    isExistAreaGroup(char const*) const;
    getInVolumeAreaObj(char const*, sead::Vector3<float> const&);
    getMtxConnecterHolder() const;
};

} 
