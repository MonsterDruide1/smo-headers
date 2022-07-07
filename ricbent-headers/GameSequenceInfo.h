#pragma once

class GameSequenceInfo
{
public:
    GameSequenceInfo();
    init();
    resetSceneStatus();
    setSceneStatusBossBattle();
    setSceneStatusBossBattleEnd();
    setSceneStatusBossBattleEndForPlayerAnim();
    setSceneStatusInvalidSave();
    isSceneStatusBossBattle() const;
    isSceneStatusBossBattleForPlayerAnim() const;
    isSceneStatusInvalidSave() const;
    isShopStatus(int) const;
    setShopStatus(int);
};
