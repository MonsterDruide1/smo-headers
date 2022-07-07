#pragma once

class SessionMusicianWarpAgent
{
public:
    SessionMusicianWarpAgent(al::LiveActor*, al::ActorInitInfo const&);
    tryGetWarpTargetInfo(al::PlacementInfo*);
    tryStartWarp();
};
