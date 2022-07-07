#pragma once

class KoopaStateDemoBattleStart
{
public:
    KoopaStateDemoBattleStart(al::LiveActor*, KoopaDemoExecutor*, int);
    initDemoStartAreaGroup(al::ActorInitInfo const&);
    setCapAppearMapPartsGroup(al::DeriveActorGroup<CapAppearMapParts>*);
    appear();
    kill();
    isFirstDemo() const;
    isEnableSkipDemo() const;
    skipDemo();
    exePrepare();
    exeStart();
    exeDemo();
    exeSkip();
    ~KoopaStateDemoBattleStart();
};
