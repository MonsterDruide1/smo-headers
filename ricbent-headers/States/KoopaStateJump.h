#pragma once

class KoopaStateJump
{
public:
    KoopaStateJump(al::LiveActor*, KoopaRingBeamEmitter*, KoopaLandPointHolder*, KoopaFlag*);
    kill();
    startAndDecideMovePointEitherFarSide();
    beforeStart();
    startAndDecideMovePointEitherFarSideWithBeam(KoopaNumberCounter*);
    startRecover();
    startRecoverStageCenter();
    receiveMsgHitPunchNoAction(al::SensorMsg const*, al::HitSensor*, al::HitSensor*, KoopaJointCtrlHolder*);
    isJumpEnd() const;
    exeJumpSign();
    exeJumpStart();
    exeJump();
    exeJumpEnd();
    ~KoopaStateJump();
};
