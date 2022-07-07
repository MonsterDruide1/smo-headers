#pragma once

class CoinRail
{
public:
    CoinRail(char const*);
    init(al::ActorInitInfo const&);
    appear();
    kill();
    makeActorDead();
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    isGot() const;
    exeMove();
    exeCloseMove();
};
