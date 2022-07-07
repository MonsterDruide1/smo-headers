#pragma once

class BossForestStateDemoBattleEnd
{
public:
    BossForestStateDemoBattleEnd(BossForest*, al::ActorInitInfo const&, al::CameraTicket*);
    appear();
    kill();
    exeRequestStartDemo();
    exeDemo();
    exeEndDemo();
    ~BossForestStateDemoBattleEnd();
};
