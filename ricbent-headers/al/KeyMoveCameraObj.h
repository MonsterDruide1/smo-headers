#pragma once

namespace al { 

class KeyMoveCameraObj
{
public:
    KeyMoveCameraObj(char const*);
    init(al::ActorInitInfo const&);
    initAfterPlacement();
    switchCamera(int);
    appear();
    control();
    getCurrentCamera() const;
    getCurrentCameraTicket() const;
    kill();
    setFirstCameraStartInterpoleStepDefault();
    validateStartAtNearestPosition();
    setPlaySumStep(int);
    setEndWaitStep(int);
};

} 
