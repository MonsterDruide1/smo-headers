#pragma once

namespace al { 

class CameraAngleCtrlInfo
{
public:
    CameraAngleCtrlInfo();
    createWithRelativeH();
    load(al::ByamlIter const&);
    start(float);
    update(sead::Vector2<float> const&, float, bool);
    receiveRequestFromObject(al::CameraObjectRequestInfo const&);
    setAngleV(float);
    isFixByRangeHV() const;
    isResetStartTiming() const;
    getMaxResetStep() const;
};

} 
