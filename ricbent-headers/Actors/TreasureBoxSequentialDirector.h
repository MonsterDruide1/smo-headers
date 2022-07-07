#pragma once

class TreasureBoxSequentialDirector
{
public:
    TreasureBoxSequentialDirector(char const*);
    init(al::ActorInitInfo const&);
    control();
    isCorrectOpen(int);
    isKillAllEnemy();
    exeWait();
    exeMissDemo();
    exeMiss();
    exeMissEnd();
};
