#pragma once

class EnemyStateRunAway
{
public:
    EnemyStateRunAway(al::LiveActor*, ParamEnemyStateRunAway const*, char const*);
    appear();
    calcRunDirBase(sead::Vector3<float>*);
    exeRun();
    exePanicRun();
    exePanicRunCollided();
    ~EnemyStateRunAway();
};
