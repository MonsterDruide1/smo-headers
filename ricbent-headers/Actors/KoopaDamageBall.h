#pragma once

class KoopaDamageBall
{
public:
    KoopaDamageBall(char const*);
    init(al::ActorInitInfo const&);
    appearAttach(sead::Vector3<float> const&);
    appearAttachShort(sead::Vector3<float> const&);
    startThrow(sead::Vector3<float> const&, sead::Vector3<float> const&);
    kill();
    movement();
    attackSensor(al::HitSensor*, al::HitSensor*);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    exeAppearSign();
    exeAppear();
    exeAppearShort();
    exeWait();
    exeFall();
    exeMove();
    exeExplode();
    createDamageBallBomb(char const*);
    appear();
};
