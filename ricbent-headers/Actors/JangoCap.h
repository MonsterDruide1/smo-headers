#pragma once

class JangoCap
{
public:
    JangoCap(char const*, int, Jango*);
    init(al::ActorInitInfo const&);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    receiveEvent(al::EventFlowEventData const*);
    control();
    demoEnd();
    hideBalloon();
    startBlowDown();
    released(sead::Vector3<float> const&, sead::Quat<float> const&);
    catched();
    directCatched();
    startStruggle();
    exeCatched();
    exeCarried();
    exeReleaseDemoWait();
    exeFall();
    exeWait();
    exeTalkDemo();
};
