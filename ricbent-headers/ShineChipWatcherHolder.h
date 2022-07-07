#pragma once

class ShineChipWatcherHolder
{
public:
    ShineChipWatcherHolder();
    entry(ShineChipWatcher*);
    notify(ShineChipWatcher*);
    tryStartAppearShine();
    getCurrentWatcher() const;
    tryUpdateCurrentWatcher(al::LiveActor const*);
    getSceneObjName() const;
    ~ShineChipWatcherHolder();
};
