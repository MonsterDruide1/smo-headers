#pragma once

class BossForestStateDemoBattleStart
{
public:
    BossForestStateDemoBattleStart(BossForest*, al::ActorInitInfo const&, al::CameraTicket*);
    appear();
    kill();
    skipDemo();
    exeRequestStartDemo();
    exeDemo();
    exeEndDemo();
    ~BossForestStateDemoBattleStart();
};
