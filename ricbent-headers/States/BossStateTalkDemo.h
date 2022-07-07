#pragma once

class BossStateTalkDemo
{
public:
    createWithEventFlow(al::LiveActor*, al::ActorInitInfo const&, char const*, char const*);
    createWithEventFlow(al::LiveActor*, al::ActorInitInfo const&, char const*);
    tryStart(char const*);
    startWithoutRequestDemo(char const*);
    setEventReceiver(al::IEventFlowEventReceiver*);
    kill();
    update();
    isFirstDemo() const;
    isEnableSkipDemo() const;
    skipDemo();
    exeDemo();
    exeDemoTalkFirst();
    exeDemoTalk();
    exeEnd();
    exeSkip();
    isPrevTalkDemo() const;
    isStartActionTiming() const;
    getStartActionName() const;
    BossStateTalkDemo(char const*, al::LiveActor*, al::ActorInitInfo const&, al::EventFlowExecutor*);
    ~BossStateTalkDemo();
};
