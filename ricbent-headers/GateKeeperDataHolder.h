#pragma once

class GateKeeperDataHolder
{
public:
    GateKeeperDataHolder(al::LiveActor*, al::ActorInitInfo const&, int, int);
    initShineAppearDemo(al::ActorInitInfo const&, sead::Vector3<float> const&);
    isMoonWorldBattle() const;
    getInitPlacementTrans() const;
    getInitPlacementMtx() const;
    noticeBossBattleToKillMsgActor();
    prepareSendKillMsg();
    killKillMsgActor();
    saveShowStartDemo();
    saveDeadGK();
    isAlreadyShowStartDemo() const;
    isAlreadyDead() const;
};
