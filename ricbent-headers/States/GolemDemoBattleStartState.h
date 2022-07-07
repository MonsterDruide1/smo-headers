#pragma once

class GolemDemoBattleStartState
{
public:
    GolemDemoBattleStartState(char const*, IUseGolemState*, al::ActorInitInfo const&, al::AddDemoInfo*);
    appear();
    exeRequest();
    kill();
    exePlay();
    ~GolemDemoBattleStartState();
};
