#pragma once

class OpeningStageStartCapManHero
{
public:
    OpeningStageStartCapManHero(char const*);
    init(al::ActorInitInfo const&);
    startDemo();
    control();
    receiveEvent(al::EventFlowEventData const*);
    skipDemo();
    endDemo(bool);
    updateOnlyDemoGraphics();
    restartAfterOpening();
    isStartRunAway() const;
    noticePlayerStand();
    startRunAway();
    startWait();
    exeWander();
    exeWanderDoubtTouch();
    exeNoticePlayerStand();
    runAwayToRail();
    exeWaitPlayerTurn();
    exeSurprise();
    exeRunAway();
    exeRunAwayWait();
    exeWaitBridge();
    getRailRider() const;
    exeEventTalkDemo();
    exeEventKoopaDemo();
    isFirstDemo() const;
    isEnableSkipDemo() const;
};
