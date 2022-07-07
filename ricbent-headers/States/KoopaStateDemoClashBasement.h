#pragma once

class KoopaStateDemoClashBasement
{
public:
    tryCreate(al::LiveActor*, al::ActorInitInfo const&, KoopaDemoExecutor*);
    KoopaStateDemoClashBasement(al::LiveActor*, KoopaDemoExecutor*, al::AreaObjGroup const*);
    appear();
    kill();
    isFirstDemo() const;
    isEnableSkipDemo() const;
    skipDemo();
    exePrepare();
    exeStart();
    exeDemo();
    exeSkip();
    exeEnd();
    ~KoopaStateDemoClashBasement();
};
