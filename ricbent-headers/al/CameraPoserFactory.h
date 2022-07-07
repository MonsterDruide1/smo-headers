#pragma once

namespace al { 

class CameraPoserFactory
{
public:
    CameraPoserFactory(char const*);
    createEntranceCameraPoser() const;
};

} 
