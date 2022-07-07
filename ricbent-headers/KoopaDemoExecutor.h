#pragma once

class KoopaDemoExecutor
{
public:
    KoopaDemoExecutor();
    init(al::LiveActor*, al::ActorInitInfo const&, al::EventFlowExecutor*, KoopaCameraCtrl*, Peach*);
    initLv1(al::ActorInitInfo const&, al::LiveActor*, KoopaCap*, KoopaShip*);
    registerDemoModel(al::LiveActor*);
    initMoonChurch(al::ActorInitInfo const&, ChurchDoor*, al::LiveActor*);
    initLv2(al::ActorInitInfo const&, al::LiveActor*, KoopaCap*, al::LiveActor*);
    update();
    startDemoAction(char const*, bool);
    skip();
    killAll();
    tryStartChurchEnterDemo(IUseDemoSkip*, al::AddDemoInfo*);
    start(char const*);
    tryStartChurchStartDemo(IUseDemoSkip*, al::AddDemoInfo*);
    tryStartBattleStartDemo(IUseDemoSkip*);
    tryStartBattleEndDemo(IUseDemoSkip*);
    tryStartClashBasementDemo(IUseDemoSkip*);
};
