#pragma once

class GiantWanderBossRailMove
{
public:
    GiantWanderBossRailMove(al::LiveActor*, GiantWanderBossRailHolder*, bool);
    appear();
    startMove(float, float);
    startFast(float, float);
    startFirstRail(float, float);
    exeWait();
    exeMove();
    tryReverseRail();
    getCurrentRail() const;
    exeFast();
    exeFirstRail();
    ~GiantWanderBossRailMove();
};
