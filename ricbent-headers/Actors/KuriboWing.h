#pragma once

class KuriboWing
{
public:
    KuriboWing(char const*);
    init(al::ActorInitInfo const&);
    control();
    updateCollider();
    attackSensor(al::HitSensor*, al::HitSensor*);
    setNerveTrample(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    endCapture();
    exeFly();
    exeDamageCap();
    exeAttackHit();
    exeSwoon();
    exeAppearStart();
    exeWait();
    exeCaptureStart();
    exeCaptureStartEnd();
    exeCaptureEnd();
    exeCaptureFly();
    exeDie();
    exeBlowDown();
    exeTurnEdge();
    exeTurnCorner();
    exeTrample();
    exeReset();
    exeRevive();
};
