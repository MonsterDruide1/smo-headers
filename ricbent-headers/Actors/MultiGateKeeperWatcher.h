#pragma once

class MultiGateKeeperWatcher
{
public:
    MultiGateKeeperWatcher(char const*);
    init(al::ActorInitInfo const&);
    isExistAliveGK() const;
    isEnableShowPlayer() const;
    isEndDemo() const;
    addDemoKoopaStatue();
    noticeGKDead(al::LiveActor const*, al::LiveActor*);
    exeWatch();
    exeBonFire();
    exeShineAppear();
    exeEntranceCamera();
};
