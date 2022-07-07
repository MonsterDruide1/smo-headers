#pragma once

class StateGateKeeperBattleEndDemo
{
public:
    StateGateKeeperBattleEndDemo(al::LiveActor*, al::ActorInitInfo const&, GateKeeperDataHolder*, GateKeeperEndDemoParam*);
    appear();
    kill();
    resetPlayer();
    control();
    isAlreadyDead() const;
    exeDieDemo();
    exeBattleEndDemo();
    exeEndCameraKeep();
    tryStartShineAppear();
    exeShineAppearWithStand();
    exeShineAppearNoStand();
    exeBonFire();
    exeMoonWorldCoinAppear();
    exeMoonWorld();
    exeMoonWorldWaitCameraInterpole();
    ~StateGateKeeperBattleEndDemo();
};
