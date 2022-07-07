#pragma once

class PlayerJudgeStartRolling
{
public:
    PlayerJudgeStartRolling(al::LiveActor const*, PlayerConst const*, PlayerInput const*, IUsePlayerCollision const*, IPlayerModelChanger const*, PlayerCarryKeeper const*);
    judge() const;
    isEnableTriggerRolling() const;
    judgeCancelHipDrop() const;
    isTriggerRestartSwing() const;
    reset();
    update();
};
