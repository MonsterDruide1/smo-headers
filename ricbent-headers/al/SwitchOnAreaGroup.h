#pragma once

namespace al { 

class SwitchOnAreaGroup
{
public:
    SwitchOnAreaGroup(al::AreaObjGroup*);
    update(sead::Vector3<float> const*, int);
    update(sead::Vector3<float> const&);
    isExternalCondition() const;
};

} 
