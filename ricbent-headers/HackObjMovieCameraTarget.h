#pragma once

class HackObjMovieCameraTarget
{
public:
    HackObjMovieCameraTarget(al::LiveActor const*);
    getTargetName() const;
    calcTrans(sead::Vector3<float>*) const;
    updateHack(bool);
    changeTargetToHackObj();
    exeInvalid();
    exeCenter();
    exeCenterFix();
    exeCenterToHackObj();
    exeCenterFixToHackObj();
    exeHackObj();
    getCameraDirector() const;
    getNerveKeeper() const;
};
