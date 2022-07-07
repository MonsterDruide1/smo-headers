#pragma once

class PaulineAtCeremony
{
public:
    PaulineAtCeremony(char const*);
    init(al::ActorInitInfo const&);
    startProcessing();
    control();
    forceControlForDance();
    controlForReSing();
    controlForLipSync();
    controlForEyeline();
    controlForDance();
    setDanceAction(PaulineAtCeremony::DanceType, float);
    setMouthAction(PaulineAtCeremony::MouthType);
    setEyelineLookAtPos(float, float);
    calPosInFrontOfSelf(sead::Vector3<float>*, float, float);
    attackSensor(al::HitSensor*, al::HitSensor*);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    receiveEvent(al::EventFlowEventData const*);
    endClipped();
    setHeadLookAtPos(float, float);
    exeStandBy();
    exeIntro();
    exeDance();
    exeReaction();
    setIsManualSetHeadLookAt(bool);
    setIsManualSetEyelineLookAt(bool);
};
