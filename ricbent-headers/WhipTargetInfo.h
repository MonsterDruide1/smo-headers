#pragma once

class WhipTargetInfo
{
public:
    WhipTargetInfo();
    initWhipTarget(al::HitSensor*, sead::Vector3<float> const*);
    clear();
    isValid() const;
    calcTargetUpDir(sead::Vector3<float>*);
    getTrans() const;
};
