#pragma once

class PlayerJudgeStartHipDrop
{
public:
    PlayerJudgeStartHipDrop(PlayerConst const*, PlayerInput const*, IUsePlayerHeightCheck const*, IPlayerModelChanger const*);
    judge() const;
    reset();
    update();
};
