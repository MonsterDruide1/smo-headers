#pragma once

class ElectricBall
{
public:
    ElectricBall(char const*, al::LiveActor*);
    init(al::ActorInitInfo const&);
    control();
    setChargeLevel(int);
    exeWait();
};
