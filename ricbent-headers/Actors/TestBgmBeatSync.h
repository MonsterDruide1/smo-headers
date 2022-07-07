#pragma once

class TestBgmBeatSync
{
public:
    TestBgmBeatSync(char const*);
    init(al::ActorInitInfo const&);
    appear();
    kill();
    control();
    exeWait();
    applyGravity();
    isEnableShoot();
    isExistAndNearRail();
    turn();
};
