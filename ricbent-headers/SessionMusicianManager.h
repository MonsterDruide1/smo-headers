#pragma once

class SessionMusicianManager
{
public:
    SessionMusicianManager(char const*);
    initAfterPlacementSceneObj(al::ActorInitInfo const&);
    entryMusician(SessionMusicianNpc*);
    isJoinedMusician() const;
    getJoinedMusician() const;
    isSubscribed(SessionMusicianType) const;
    tryAppearPowerPlant();
    findPowerPlant() const;
    tryStartWarp(al::PlacementInfo*);
    addDemoAllMusicians();
    exeWait();
    exeComplete();
    ~SessionMusicianManager();
};
