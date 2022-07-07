#pragma once

class DemoHackFirstDirector
{
public:
    DemoHackFirstDirector(int);
    init(al::ActorInitInfo const&);
    appear();
    attackSensor(al::HitSensor*, al::HitSensor*);
    registRequestActor(al::LiveActor*);
    getDemoStartWaitFrame() const;
    setHackFirstDemo(al::LiveActor*, IUsePlayerHack*);
    setHackFirstDemoCore(al::LiveActor*, IUsePlayerHack*);
    noticeDemoStartToDemoHackFirstDirector();
    skipDemo();
    endDemo();
    updateOnlyDemoGraphics();
    tryEndDemo();
    isEndHackFirstDemo() const;
    exeWatch();
    exeDemo();
    exeShowMessage();
    startShowMessageFrog();
    exeEnd();
};
