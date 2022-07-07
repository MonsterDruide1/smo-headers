#pragma once

class KoopaStateDeadAndDemoBattleEnd
{
public:
    KoopaStateDeadAndDemoBattleEnd(al::LiveActor*, KoopaDemoExecutor*, KoopaCap*, KoopaWeaponHolder*, al::LiveActor*, bool);
    appear();
    kill();
    isFirstDemo() const;
    isEnableSkipDemo() const;
    skipDemo();
    exeDead();
    exeStart();
    exeDemo();
    exeSkip();
    ~KoopaStateDeadAndDemoBattleEnd();
};
