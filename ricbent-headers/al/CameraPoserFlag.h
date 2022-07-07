#pragma once

namespace al { 

class CameraPoserFlag
{
public:
    CameraPoserFlag();
    load(al::ByamlIter const&);
    isValidKeepPreSelfPoseNextCamera() const;
};

} 
