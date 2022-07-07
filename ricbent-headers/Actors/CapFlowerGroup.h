#pragma once

class CapFlowerGroup
{
public:
    CapFlowerGroup(char const*);
    init(al::ActorInitInfo const&);
    changeFlowersColorWhite();
    appear();
    isBloomed() const;
    makeActorAlive();
    kill();
    makeActorDead();
    killAll();
    killWithoutFlowers();
    makeActorDeadWithoutFlowers();
    exeWait();
    exeTimer();
    exeAllBloomed();
    exeEndWait();
};
