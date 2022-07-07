#pragma once

class GiantWanderBossRailHolder
{
public:
    GiantWanderBossRailHolder(al::ActorInitInfo const&);
    getRailCircle() const;
    getRailEscape() const;
    getRailFirst() const;
    isEscapeRail() const;
    startEscapeRail();
    endEscapeRail();
};
