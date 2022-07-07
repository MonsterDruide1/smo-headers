#pragma once

class SenobiStateEnemyStateWander
{
public:
    SenobiStateEnemyStateWander(Senobi*);
    appear();
    setNerveWait();
    exeWait();
    exeWalk();
    exeFall();
    ~SenobiStateEnemyStateWander();
};
