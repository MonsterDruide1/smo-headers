#pragma once

namespace al { 

class SnapShotCameraCtrl
{
public:
    SnapShotCameraCtrl(al::SnapShotCameraSceneInfo const*);
    start(float);
    load(al::ByamlIter const&);
    startReset(int);
    update(sead::LookAtCamera const&, al::IUseCollision const*, al::ICameraInput const*);
    makeLookAtCameraPost(sead::LookAtCamera*) const;
    makeLookAtCameraLast(sead::LookAtCamera*) const;
    exeWait();
    exeReset();
    getAudioKeeper() const;
    ~SnapShotCameraCtrl();
};

} 
