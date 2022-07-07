#pragma once

class BossMagmaBullet
{
public:
    BossMagmaBullet(char const*, BossMagmaBullet::EType, IBossMagmaBulletObserver*);
    init(al::ActorInitInfo const&);
    attackSensor(al::HitSensor*, al::HitSensor*);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    appear();
    roll(sead::Matrix34<float> const*, sead::Matrix34<float> const*, sead::Vector3<float> const&);
    shot(sead::Vector3<float> const&, sead::Vector3<float> const&, float);
    shotLv3(sead::Matrix34<float> const*, sead::Matrix34<float> const*, sead::Vector3<float> const&, float);
    exeRollAppear();
    exeRoll();
    trySnapFireSurface();
    endRoll();
    exeShot();
    updateLanding();
    exeFloat();
    exeSink();
    exeSinkAnim();
    exeBreak();
    exeShotLv3Appear();
    exeShotLv3();
    control();
};
