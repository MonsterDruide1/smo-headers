#pragma once

class WorldWarpTalkData
{
public:
    WorldWarpTalkData(int);
    init();
    isAlreadyTalkPrevWorld(int) const;
    isAlreadyTalkNextWorld(int) const;
    setAlreadyTalkPrevWorld(int);
    setAlreadyTalkNextWorld(int);
    getTipsId() const;
    addTipsId();
    setTalkSpecial(bool, bool);
    isTalkFindKoopa() const;
    isTalkBossRaid() const;
    write(al::ByamlWriter*);
    read(al::ByamlIter const&);
};
