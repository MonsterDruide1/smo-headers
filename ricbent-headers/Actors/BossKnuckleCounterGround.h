#pragma once

class BossKnuckleCounterGround
{
public:
    BossKnuckleCounterGround(char const*);
    init(al::ActorInitInfo const&);
    attackSensor(al::HitSensor*, al::HitSensor*);
    doBreak();
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    doFall(sead::Vector3<float> const&);
    doFallStartDemo();
    setBeforeStart();
    doWaitOnGround();
    isBreak() const;
    isBeforeStart() const;
    killAll();
    exeWaitOnGround();
    exeFall();
    exeSink();
    exeBreak();
    exeBeforeStart();
};
