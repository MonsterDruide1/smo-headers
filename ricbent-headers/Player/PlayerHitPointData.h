#pragma once

class PlayerHitPointData
{
public:
    PlayerHitPointData();
    setKidsModeFlag(bool);
    init();
    recoverMax();
    getCurrent() const;
    getMaxCurrent() const;
    getMaxWithItem() const;
    getMaxWithoutItem() const;
    isMaxCurrent() const;
    isMaxWithItem() const;
    getMaxUpItem();
    recover();
    recoverForDebug();
    damage();
    kill();
    forceNormalMode();
    endForceNormalMode();
    isForceNormalMode() const;
    write(al::ByamlWriter*);
    read(al::ByamlIter const&);
};
