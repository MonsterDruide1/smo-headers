#pragma once

class Pukupuku
{
public:
    Pukupuku(char const*);
    init(al::ActorInitInfo const&);
    initAfterPlacement();
    isNerveInWater() const;
    attackSensor(al::HitSensor*, al::HitSensor*);
    receiveMsg(al::SensorMsg const*, al::HitSensor*, al::HitSensor*);
    endCapture();
    revive(int);
    startCapture();
    updateEffectWaterSurface();
    updateWaterCondition();
    control();
    updateInputRolling();
    updateInputKiss();
    updateInputUpDown();
    isSwimTypeA() const;
    updateVelocity();
    exeReaction();
    exeWaitRollingRail();
    exeWait();
    checkCollidedFloorDamageAndNextNerve();
    exeWaitTurnToRailDir();
    exeSwoon();
    exeCaptureStart();
    exeCaptureStartEnd();
    getAccel(IUsePlayerHack*) const;
    exeCaptureSwimStart();
    onWaterOut();
    tryAddVelocityWaterSurfaceJumpOut();
    approachSurface();
    updatePoseSwim();
    isTriggerSwimDash() const;
    onWaterIn();
    exeCaptureSwim();
    exeCaptureReactionWall();
    checkJumpOutCondition() const;
    updateCameraCaptureWait();
    exeCaptureWait();
    exeCaptureAttack();
    exeCaptureRolling();
    updateGroundTimeLimit();
    exeCaptureWaitGround();
    exeCaptureJumpGround();
    exeCaptureLandGround();
    exeBlowDown();
    exeTrample();
    exeRevive();
    exeDemoWaitToRevive();
};
