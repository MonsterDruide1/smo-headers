#pragma once

class TalkNpcSwitchWaitActionObj
{
public:
    tryCreate(TalkNpcParam const*, TalkNpcActionAnimInfo*, RandomActionUpdater*, al::ActorInitInfo const&);
    TalkNpcSwitchWaitActionObj(al::StageSwitchDirector*, TalkNpcParam const*, TalkNpcActionAnimInfo*, RandomActionUpdater*, al::PlacementInfo const&);
    listenStageSwitchStartWaitActionSwitchOn();
    listenStageSwitchStartWaitActionSwitchOff();
    initStageSwitchKeeper();
    getName() const;
    getStageSwitchKeeper() const;
};
