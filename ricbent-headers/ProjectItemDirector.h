#pragma once

class ProjectItemDirector
{
public:
    ProjectItemDirector();
    ProjectItemDirector(al::ActorInitInfo const&);
    appearItem(char const*, sead::Vector3<float> const&, sead::Quat<float> const&, al::HitSensor const*);
    tryAppearPlayerDeadCoin(al::LiveActor const*, sead::Vector3<float> const&);
    acquireItem(al::LiveActor const*, al::HitSensor*, char const*) const;
    declareItem(char const*, al::ActorInitInfo const&);
    endInit();
    tryAddDemoCountUpCoin();
    initPlayerDeadCoin(GameDataHolder*, al::ActorInitInfo const&);
    setCoinTransForDeadPlayer(GameDataHolder*);
    tryHidePlayerDeadCoinForDemo();
    tryShowPlayerDeadCoinForDemo();
};
