#pragma once

namespace al { 

class CameraPoserSubjective
{
public:
    CameraPoserSubjective(char const*);
    init();
    loadParam(al::ByamlIter const&);
    start(al::CameraStartInfo const&);
    movement();
    update();
    startSnapShotMode();
    endSnapShotMode();
    exeWait();
    exeReset();
    getCameraOffsetFront();
    isZooming() const;
    isEnableRotateByPad() const;
};

} 
