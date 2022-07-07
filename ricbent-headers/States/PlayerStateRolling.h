#pragma once

class PlayerStateRolling
{
public:
    PlayerStateRolling(al::LiveActor*, PlayerConst const*, PlayerInput const*, IUsePlayerCollision const*, PlayerTrigger*, PlayerAnimator*, PlayerEffect*, PlayerJudgeStartRolling*, IJudge*, PlayerJudgePreInputJump*, PlayerJudgePreInputCapThrow*, IJudge*, PlayerContinuousLongJump*, PlayerSeCtrl*);
    appear();
    kill();
    update();
    control();
    isRolling() const;
    isRollingJump() const;
    isEnableCancelNormalJump() const;
    isEndSquat() const;
    isEndStandUp() const;
    isEnableTrample(al::HitSensor const*, al::HitSensor const*) const;
    getInverseKinematicsRate() const;
    exeBoostStart();
    updateRollingAnimFrameRate();
    exeStart();
    isStartRollingBrake() const;
    exeRolling();
    restartRolling(bool, bool);
    exeJump();
    exeLand();
    exeUnRoll();
    exeBrake();
    exeStandUp();
    exeEndSquat();
    ~PlayerStateRolling();
};
