#pragma once

class Gotogoton
{
public:
    Gotogoton(char const*);
    init(al::ActorInitInfo const&);
    makeFaceList(sead::Vector3<int> const&, float);
    attackSensor(al::HitSensor*, al::HitSensor*);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    endHack(bool);
    control();
    exeWait();
    exeHackStart();
    setNerveHackWait();
    exeHackWait();
    exeDontMoveReflect();
    exeDontMove();
    exeRotate();
    exeRotateCancel();
    exeHackEnd();
    exeSuccess();
    exeEnd();
};
