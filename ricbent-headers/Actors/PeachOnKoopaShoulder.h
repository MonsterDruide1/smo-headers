#pragma once

class PeachOnKoopaShoulder
{
public:
    PeachOnKoopaShoulder(char const*);
    create(al::LiveActor*, al::ActorInitInfo const&, PeachOnKoopaAnimInfo const*, sead::Matrix34<float> const*);
    init(al::ActorInitInfo const&);
    attackSensor(al::HitSensor*, al::HitSensor*);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    startCarried();
    startDead(sead::Matrix34<float> const&);
    validateAppearTiaraEyes();
    invalidateAppearTiaraEyes();
    exeWaitPanicL();
    exeMovePanicR();
    exeWaitPanicR();
    exeMovePanicL();
    exeReactionTrample();
    exeReactionCap();
    exeCarried();
    exeDead();
};
