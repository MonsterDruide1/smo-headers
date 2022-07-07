#pragma once

class RhyhtmInfoWatcher
{
public:
    RhyhtmInfoWatcher(char const*);
    initAfterPlacementSceneObj(al::ActorInitInfo const&);
    control();
    loopCheck();
    getCurrentBeat() const;
    getBeatDelta() const;
    isLooping() const;
    ~RhyhtmInfoWatcher();
};
