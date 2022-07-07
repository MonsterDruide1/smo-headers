#pragma once

namespace al { 

class CameraPoserFix
{
public:
    CameraPoserFix(char const*);
    init();
    initCameraPosAndLookAtPos(sead::Vector3<float> const&, sead::Vector3<float> const&);
    loadParam(al::ByamlIter const&);
    start(al::CameraStartInfo const&);
    update();
    getFixAbsoluteCameraName();
    getFixDoorwayCameraName();
};

} 
