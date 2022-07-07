#pragma once

namespace al { 

class SpecialCameraHolder
{
public:
    SpecialCameraHolder();
    allocEntranceCameraBuffer(int);
    registerEntranceCamera(al::CameraTicket*);
    findEntranceCamera(char const*) const;
};

} 
