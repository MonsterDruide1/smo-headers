#pragma once

namespace al { 

class CameraPoserBossBattle
{
public:
    CameraPoserBossBattle(char const*, sead::Vector3<float> const*);
    init();
    loadParam(al::ByamlIter const&);
    start(al::CameraStartInfo const&);
    makeLookAtCamera(sead::LookAtCamera*) const;
    update();
    isEnableRotateByPad() const;
    setPosPtr(sead::Vector3<float> const*);
    tryChangeFollowCamera();
    isCameraTargetOutOfRangeY() const;
    tryChangeTowerCamera();
    calcOutOfRangeDistance() const;
    exeTower();
    exeFollow();
    endFollow();
    exeFollowNear();
};

} 
