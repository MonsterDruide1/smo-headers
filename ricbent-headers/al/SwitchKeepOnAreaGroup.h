#pragma once

namespace al { 

class SwitchKeepOnAreaGroup
{
public:
    isExternalCondition() const;
    SwitchKeepOnAreaGroup(al::AreaObjGroup*);
    update(al::SwitchAreaTargetInfo const*);
    update(sead::Vector3<float> const&);
    selectTargetPosArray(bool*, sead::Vector3<float>**, int*, al::AreaObj const*, al::SwitchAreaTargetInfo const*);
};

} 
