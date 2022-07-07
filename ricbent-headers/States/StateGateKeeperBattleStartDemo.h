#pragma once

class StateGateKeeperBattleStartDemo
{
public:
    StateGateKeeperBattleStartDemo(al::LiveActor*, al::ActorInitInfo const&, GateKeeperDataHolder*, MultiGateKeeperWatcher*);
    hideModelIfNeed();
    appear();
    receiveEvent(al::EventFlowEventData const*);
    isSkipped() const;
    getStackerSubCapNum() const;
    getStackerSubCap(int) const;
    exeWaitStartDemo();
    tryStartDemo();
    exePrepareDemo();
    prepareDemo();
    exeBattleStartShipAppear();
    exeBattleStartTalkStart();
    exeBattleStartTalk();
    exeBattleStartGKAppear();
    endDemo(bool);
    exeDemoEnd();
    exeDemoSkip();
    isFirstDemo() const;
    isEnableSkipDemo() const;
    skipDemo();
    ~StateGateKeeperBattleStartDemo();
    getMessageSystem() const;
};
