#pragma once

class EnemyStateWander
{
public:
    EnemyStateWander(al::LiveActor*, char const*);
    appear();
    exeWait();
    exeWalk();
    exeFall();
    isWait() const;
    isWalk() const;
    isFall() const;
    changeWalkAnim(char const*);
    ~EnemyStateWander();
};
