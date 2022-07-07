#pragma once

namespace al { 

class RaceJudge
{
public:
    RaceJudge(al::LiveActor*, al::RaceCheckPoint const*, int);
    reset();
    update();
    isGoal() const;
    isFinalLap() const;
    calcTotalFrame() const;
    calcIsReverse() const;
    calcProgress();
    validateUpdate();
    invalidateUpdate();
    getPassCheckPointPos(sead::Vector3<float>*) const;
    getPassCheckPointFront(sead::Vector3<float>*) const;
    isPassCheckPointUseRecoverPoint() const;
    getPassCheckPointRecoverTrans() const;
    getPassCheckPointRecoverPose() const;
};

} 
