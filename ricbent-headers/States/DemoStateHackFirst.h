#pragma once

class DemoStateHackFirst
{
public:
    DemoStateHackFirst(al::LiveActor*, al::ActorInitInfo const&);
    appear();
    kill();
    isFirstDemo() const;
    isEnableSkipDemo() const;
    skipDemo();
    endDemo();
    updateOnlyDemoGraphics();
    tryHackFirstDemoWait(al::SensorMsg const*);
    isEnableShowHackDemo() const;
    tryHackFirst(IUsePlayerHack**, al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    exeDemo();
    exeEnd();
    ~DemoStateHackFirst();
};
