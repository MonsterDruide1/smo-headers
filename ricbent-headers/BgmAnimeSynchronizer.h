#pragma once

class BgmAnimeSynchronizer
{
public:
    isCreatable(al::LiveActor const*);
    tryCreate(al::LiveActor*, al::ByamlIter&);
    registSyncTargetActionInfo(BgmSyncTargetActionInfo*);
    BgmAnimeSynchronizer(al::LiveActor*, char const*, BgmSyncTargetActionInfo*);
    init();
    BgmAnimeSynchronizer(al::LiveActor*, char const*, int);
    trySyncBgm();
    setSyncChaseRateOffsetMax(float, float, float, float);
};
