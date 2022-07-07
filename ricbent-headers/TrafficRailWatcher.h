#pragma once

class TrafficRailWatcher
{
public:
    TrafficRailWatcher(al::PlacementInfo const&);
    isEqual(al::PlacementInfo const&) const;
    registerActor(al::LiveActor const*);
    isExist(al::LiveActor const*) const;
    stopByTraffic(al::LiveActor const*);
    restartByTraffic(al::LiveActor const*);
    tryStopByOtherNpc(al::LiveActor const*);
    tryRestartByOtherNpc(al::LiveActor const*);
};
