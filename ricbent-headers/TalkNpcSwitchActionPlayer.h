#pragma once

class TalkNpcSwitchActionPlayer
{
public:
    TalkNpcSwitchActionPlayer(al::StageSwitchDirector*, RandomActionUpdater*, al::PlacementInfo const&);
    listenStageSwitchStartActionOn();
    initStageSwitchKeeper();
    getName() const;
    getStageSwitchKeeper() const;
};
