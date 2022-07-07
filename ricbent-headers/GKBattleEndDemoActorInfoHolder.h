#pragma once

class GKBattleEndDemoActorInfoHolder
{
public:
    GKBattleEndDemoActorInfoHolder(int);
    registExtraDemoActor(al::LiveActor*, bool, char const*);
    addExtraDemoActors(sead::Matrix34<float> const&);
    startBattleEnd();
};
