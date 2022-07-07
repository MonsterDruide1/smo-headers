#pragma once

class KoopaShip
{
public:
    KoopaShip(char const*);
    init(al::ActorInitInfo const&);
    onSwitchGateKeeperOpeningDemoStart();
    onBlurMovie();
    initAfterPlacement();
    offDepthShadow();
    onDepthShadow();
    movement();
    control();
    appear();
    kill();
    calcAnim();
    startClipped();
    endClipped();
    exeWait();
    endWait();
    exeDemo();
    exeDemoAppear();
    exeDemoGateKeeper();
    exeDemoHomeFlyAway();
    exeDemoHomeFlyAwayAfter();
    startDemoWait();
    endDemoWait(Peach*);
    skipGateKeeperOpeningDemo();
    startDemoHomeFlyAway();
    endDemoHomeFlyAway();
    isEnableStartWipeDemoHomeFlyAway() const;
    getWipeDemoHomeFlyAwayStep();
    isEnableEndDemoHomeFlyAway() const;
    createForKoopaLv1(al::LiveActor*, Peach*, al::ActorInitInfo const&);
    switchHalfModel();
};
