#pragma once

namespace al { 

class CameraSwitcher
{
public:
    CameraSwitcher();
    init(al::CameraSwitchRequestInfo*, al::CameraSwitchRequestInfo*);
    initAfterPlacement();
    getStartRequest(int) const;
    update();
    getEndRequest(int) const;
    isExistNextCamera() const;
    getNextCamera() const;
    getNextInterpoleStep() const;
    isNextKeepPose() const;
    isSetNextPoseInfo() const;
    getNextPoseInfo() const;
};

} 
