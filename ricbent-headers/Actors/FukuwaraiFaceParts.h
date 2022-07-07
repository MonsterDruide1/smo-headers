#pragma once

class FukuwaraiFaceParts
{
public:
    FukuwaraiFaceParts(char const*, al::AreaObjGroup*);
    init(al::ActorInitInfo const&);
    getPriority() const;
    control();
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    calcScore(bool) const;
    isPlaced() const;
    calcScoreAngleRate() const;
    calcScoreDistRate() const;
    show();
    reset();
    vanish();
    exePlace();
    exeReset();
    exeAppear();
    exeWait();
    exeCaptureWait();
    exeCaptureMove();
    exeHide();
    exeCaptureStart();
    exeCaptureHackStart();
    isKuriboMarioParts() const;
};
