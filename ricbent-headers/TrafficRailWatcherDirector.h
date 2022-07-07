#pragma once

class TrafficRailWatcherDirector
{
public:
    TrafficRailWatcherDirector();
    registerActor(al::LiveActor const*, al::ActorInitInfo const&);
    findActorRailWatcher(al::LiveActor const*) const;
    getSceneObjName() const;
    ~TrafficRailWatcherDirector();
};
