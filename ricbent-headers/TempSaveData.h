#pragma once

class TempSaveData
{
public:
    TempSaveData();
    init();
    initForScenario();
    resetMiniGame();
    setInfo(int, int);
    writeInWorld(al::PlacementId const*, char const*);
    deleteInWorld(al::PlacementId const*, char const*);
    isOnInWorld(al::PlacementId const*, char const*) const;
    writeInWorldResetMiniGame(al::PlacementId const*, char const*);
    deleteInWorldResetMiniGame(al::PlacementId const*, char const*);
    isOnInWorldResetMiniGame(al::PlacementId const*, char const*) const;
    writeInScenario(al::PlacementId const*, char const*);
    isOnInScenario(al::PlacementId const*, char const*) const;
    writeHashInWorld(char const*, bool);
    findHashValueInWorld(char const*) const;
};
