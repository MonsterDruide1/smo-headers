#pragma once

class StageTalkDemoNpcCap
{
public:
    StageTalkDemoNpcCap(char const*, int, int);
    init(al::ActorInitInfo const&);
    startDemo();
    isEnableShowDemoAfterOpenMoonRockFirst() const;
    isEnableShowDemoMoonRockMapWorld() const;
    isSceneDemo() const;
    kill();
    receiveEvent(al::EventFlowEventData const*);
    tryStartDemo();
    startDemoFromScene();
    isEnableStartMoonRockFindDemo() const;
    isEnableStartAfterBreakMoonRockDemo() const;
    preEventFromSceneFirstMoonGet(char const*);
    isEnableStageStartDemo() const;
    isEndDemo() const;
    tryStartDemoAfterMoonRockBreak();
    exeWait();
    exeWaitSwitch();
    exeDelay();
    exeDemo();
    endDemoCommon();
    exeDemoMoonRockMap();
};
