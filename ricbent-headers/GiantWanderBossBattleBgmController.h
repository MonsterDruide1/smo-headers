#pragma once

class GiantWanderBossBattleBgmController
{
public:
    GiantWanderBossBattleBgmController(GiantWanderBoss*);
    update();
    start();
    stop();
    isStarted();
    exeWaitStart();
    exeWaitIntroEnd();
    exeNearZone();
    exeMidZone();
    exeFarZone();
    exeIn2DZone();
    ~GiantWanderBossBattleBgmController();
};
