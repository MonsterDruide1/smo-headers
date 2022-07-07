#pragma once

class EnemyStateReset
{
public:
    EnemyStateReset(al::LiveActor*, al::ActorInitInfo const&, EnemyCap*);
    appear();
    kill();
    exeWait();
    ~EnemyStateReset();
};
