#pragma once

class JangoDemoCamera
{
public:
    update();
    startJangoLookCamera();
    stayLookAt();
    endJangoLookCameraAndStartPlayerLookCamera();
    endPlayerLookCamera();
    JangoDemoCamera(al::LiveActor*, al::ActorInitInfo const&);
};
