#pragma once

namespace al { 

class CameraSwitchRequestInfo
{
public:
    CameraSwitchRequestInfo();
    addRequest(al::CameraTicket*, int, bool);
    addRequestWithNextCameraPose(al::CameraTicket*, al::CameraPoseInfo const*, int);
    tryRemoveRequestIfExist(al::CameraTicket*);
    reset();
};

} 
