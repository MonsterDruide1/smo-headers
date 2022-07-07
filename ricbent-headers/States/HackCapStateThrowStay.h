#pragma once

class HackCapStateThrowStay
{
public:
    HackCapStateThrowStay(al::LiveActor*, PlayerColliderHackCap const*, al::LiveActor const*, PlayerSeparateCapFlag const*, PlayerInput const*, IUsePlayerCollision const*, PlayerEyeSensorHitHolder const*, HackCapTrigger const*, HackCapJointControlKeeper*, HackCapJudgePreInputSeparateJump*, bool const*);
    appear();
    kill();
    update();
    isHomingPlayerJump() const;
    isEnableAppendAttack() const;
    isEnableKeepStayTouchJump() const;
    isEnableTouchJumpTransWarp() const;
    isEnableSendHipDropMsg() const;
    sendHipDropCollideMsg(al::HitSensor*);
    sendHipDropObjMsg(HackCapTrigger*, al::HitSensor*, al::HitSensor*);
    exeStay();
    exeSeparateMove();
    updateStayMove();
    exeSeparateJump();
    exeSeparateHomingAttack();
    exeSeparateHipDropStart();
    exeSeparateHipDropLoop();
    exeSeparateHipDropLand();
    exeSeparateFallDown();
    exeSeparateApproachStart();
    exeSeparateApproach();
    exeSeparateApproachEnd();
    ~HackCapStateThrowStay();
};
