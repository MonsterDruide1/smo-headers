#pragma once

class GolemDemoBattleEndState
{
public:
    GolemDemoBattleEndState(char const*, IUseGolemState*, al::ActorInitInfo const&);
    appear();
    kill();
    exeRequest();
    exePlay();
    ~GolemDemoBattleEndState();
};
