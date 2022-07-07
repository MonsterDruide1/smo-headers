#pragma once

class RabbitGraphRailKeeper
{
public:
    RabbitGraphRailKeeper(char const*);
    RabbitGraphRailKeeper(char const*, al::LiveActor*);
    init(al::ActorInitInfo const&);
    appearBySwitch();
    killBySwitch();
    isRailPointIgnore(int) const;
    isRailPointConnectToCollision(int) const;
    appear();
    kill();
    exeWait();
    getRailRider() const;
};
