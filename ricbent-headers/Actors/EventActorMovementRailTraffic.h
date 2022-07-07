#pragma once

class EventActorMovementRailTraffic
{
public:
    EventActorMovementRailTraffic(char const*, al::LiveActor*);
    init(al::ActorInitInfo const&);
    appear();
    exeMove();
    exeStopByOtherNpc();
    exeStopAfter();
};
