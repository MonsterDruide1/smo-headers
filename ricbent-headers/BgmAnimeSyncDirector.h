#pragma once

class BgmAnimeSyncDirector
{
public:
    BgmAnimeSyncDirector();
    update();
    calcArchiveAndActionIndex(char const*, char const*);
    calcNecessaryMeasuresNumScale(int);
    initAfterPlacementSceneObj(al::ActorInitInfo const&);
    ~BgmAnimeSyncDirector();
    getAudioKeeper() const;
};
