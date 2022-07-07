#pragma once

class GiantWanderBossStateEscape
{
public:
    GiantWanderBossStateEscape(al::LiveActor*);
    appear();
    exeGoToEscapeRail();
    exeEscapeRailFast();
    exeEscapeRailSlow();
    exeEscapeRailToEnd();
    ~GiantWanderBossStateEscape();
};
