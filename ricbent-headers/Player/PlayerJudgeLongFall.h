#pragma once

class PlayerJudgeLongFall
{
public:
    PlayerJudgeLongFall(al::LiveActor const*, PlayerConst const*, IUsePlayerFallDistanceCheck const*, PlayerHackKeeper const*, PlayerBindKeeper const*, IPlayerModelChanger const*);
    judge() const;
    reset();
    update();
};
