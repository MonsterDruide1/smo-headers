#pragma once

class GKShip
{
public:
    GKShip(char const*);
    init(al::ActorInitInfo const&);
    initAfterPlacement();
    control();
    registerBattleGK(al::LiveActor*, GateKeeperDataHolder const*);
    initAfterCreateGK(al::ActorInitInfo const&, bool);
    updatePoseForWait(bool);
    startBattleStartDemo(al::LiveActor*, int);
    prepareStartDemo();
    startDemoShipAppear();
    startDemoTalkAction();
    startBattleStartTalk();
    tryStartBattleGKAppear(al::EventFlowExecutor*, EventActorStateDemoTalkGK*);
    startActionDemoGKBattleStart();
    tryEndDemo();
    endDemo();
    skipDemo();
    isEndBattleStartDemo() const;
    isEnableDemoSkip() const;
    getStackerSubCapNum() const;
    getStackerSubCap(int) const;
    hideModelForLavaWorldWarp();
    exeWait();
    exeBattleStartShipAppear();
    exeBattleStartTalk();
    exeBattleStartGKAppear();
    exeBattleStartDemoEnd();
};
