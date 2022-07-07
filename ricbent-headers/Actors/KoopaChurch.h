#pragma once

class KoopaChurch
{
public:
    KoopaChurch(char const*);
    init(al::ActorInitInfo const&);
    control();
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    isFirstDemo() const;
    skipDemo();
    exeBeforeEnter();
    exeDemoEnter();
    exeWait();
    exeDemoChurch();
    exeChangeStage();
    exeEnd();
    isEnableSkipDemo() const;
};
