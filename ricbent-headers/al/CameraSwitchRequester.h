#pragma once

namespace al { 

class CameraSwitchRequester
{
public:
    CameraSwitchRequester();
    init(al::CameraSwitchRequestInfo*, al::CameraSwitchRequestInfo*);
    requestStart(al::CameraTicket*, int);
    requestEnd(al::CameraTicket*, int, bool);
    requestEndWithNextCameraPose(al::CameraTicket*, al::CameraPoseInfo const*, int);
};

} 
