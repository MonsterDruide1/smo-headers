#pragma once

class Peach
{
public:
    Peach(char const*);
    init(al::ActorInitInfo const&);
    control();
    makeActorDeadBouquet();
    startWaitKoopaShip();
    startWaitKoopaShipWithKoopa();
    startWaitChurch();
    startWaitDemo(bool);
    startDemoAction(char const*);
    exeWait();
    exeWaitKoopaShip();
    exeWaitKoopaShipWithKoopa();
    exeWaitChurch();
    exeWaitDemo();
    endWaitDemo();
};
