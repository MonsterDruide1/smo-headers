#pragma once

class GateKeeperStartDemoParam
{
public:
    GateKeeperStartDemoParam(int);
    registExtraDemoActor(al::LiveActor*, bool, char const*);
    addExtraDemoActors(sead::Matrix34<float> const&);
    startBattleStart();
};
