#pragma once

class GolemRunState
{
public:
    GolemRunState(char const*, IUseGolemState*, float const&, sead::Vector3<float> const&);
    appear();
    kill();
    exeSign();
    exeRun();
    exeStagger();
    exeCenter();
    exeReturn();
    exeEnd();
    ~GolemRunState();
};
