#pragma once

class BossSaveData
{
public:
    BossSaveData();
    init();
    isAlreadyShowDemoBossBattleStart(int, int) const;
    showDemoBossBattleStart(int, int);
    isAlreadyDeadGK(int, int) const;
    onAlreadyDeadGK(int, int);
    isAlreadyShowDemoBattleEndKoopaLv2() const;
    saveDemoBattleEndKoopaLv2();
    resetLv3Data();
    write(al::ByamlWriter*);
    read(al::ByamlIter const&);
};
