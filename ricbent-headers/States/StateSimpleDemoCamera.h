#pragma once

class StateSimpleDemoCamera
{
public:
    StateSimpleDemoCamera(al::LiveActor*, al::CameraTicket*);
    appear();
    exeWaitCameraInterpole();
    ~StateSimpleDemoCamera();
};
