#pragma once

class GameProgressData
{
public:
    GameProgressData(WorldList const*);
    init();
    updateList();
    checkAndChangeCorrectStatus(int, int);
    isFindKoopa() const;
    isBossAttackedHome() const;
    isActivateHome() const;
    activateHome();
    isLaunchHome() const;
    launchHome();
    findKoopa();
    isCrashHome() const;
    crashHome();
    isRepairHome() const;
    repairHome();
    bossAttackHome();
    isRepairHomeByCrashedBoss() const;
    repairHomeByCrashedBoss();
    getHomeLevel() const;
    upHomeLevel();
    getUnlockWorldNum() const;
    isUnlockWorld(int) const;
    getWorldIdForWorldMap(int) const;
    calcNextLockedWorldNumForWorldMap() const;
    calcNextLockedWorldIdForWorldMap(int) const;
    isUnlockFirstForest() const;
    isUnlockFirstSea() const;
    getWorldIdForWorldWarpHole(int) const;
    getWorldIdForShineList(int) const;
    calcWorldNumForShineList() const;
    isAlreadyGoWorld(int) const;
    unlockNextWorld(int);
    unlockForest();
    unlockLake();
    unlockSnow();
    unlockSea();
    unlockNormalWorld();
    isFirstTimeGoWorld(int) const;
    setAlreadyGoWorld(int);
    isTalkedCapNearHomeInWaterfall() const;
    talkCapNearHomeInWaterfall();
    write(al::ByamlWriter*);
    read(al::ByamlIter const&);
    initList();
    calcWorldIdByOrderUnlock(int) const;
};
