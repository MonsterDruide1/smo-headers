#pragma once

class BazookaElectric
{
public:
    BazookaElectric(char const*);
    init(al::ActorInitInfo const&);
    initAfterPlacement();
    appear();
    control();
    exeWait();
    exeNoReaction();
    exeWaitPossession();
    exeStartPossession();
    exeWaitCharge();
    exeStartChargePossession();
    exeBeforeLaunch();
    changeLaunchNerve();
    exeLaunchPossession();
    exeLaunchPossessionDownRise();
    exeLaunchPossessionDownDown();
    exeLaunchPossessionDownParabolic();
    exeAppearDemo();
    exeAppearDemoPlayerGround();
    exeAppearDemoLand();
    exeAppearDemoDown();
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    cancelHack();
};
