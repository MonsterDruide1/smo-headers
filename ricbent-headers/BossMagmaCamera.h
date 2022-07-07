#pragma once

class BossMagmaCamera
{
public:
    BossMagmaCamera(BossMagma*, al::ActorInitInfo const&);
    startCameraDamage();
    startCameraDemo(char const*);
    startCameraBreath(bool);
    startCameraTower(float, float, float, float);
    startCameraZoomOut();
    startCameraReset(unsigned int);
    end(unsigned int);
    isNone() const;
    exeNone();
    exeDamage();
    tryEnd();
    endDamage();
    exeDemo();
    endDemo();
    exeBreath();
    controlBreathCameraH();
    controlBreathCameraLimit();
    controlBreathCameraV();
    endBreath();
    exeTower();
    calcDistance(float, float) const;
    endTower();
    exeZoomOut();
    endZoomOut();
    exeReset();
    endReset();
    calcPosForBreath(sead::Vector3<float>*, sead::Vector3<float>*, sead::Vector3<float>*) const;
    calcBreathCameraTarget(sead::Vector3<float>*, sead::Vector3<float> const&, sead::Vector3<float> const&, sead::Vector3<float> const&, float) const;
    ~BossMagmaCamera();
};
