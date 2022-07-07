#pragma once

namespace al { 

class AreaObj
{
public:
    getName() const;
    getStageSwitchKeeper() const;
    getSceneObjHolder() const;
    AreaObj(char const*);
    init(al::AreaInitInfo const&);
    validate();
    invalidate();
    initStageSwitchKeeper();
    isInVolume(sead::Vector3<float> const&) const;
    isInVolumeOffset(sead::Vector3<float> const&, float) const;
};

} 
