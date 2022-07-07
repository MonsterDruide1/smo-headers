#pragma once

class KakkuStateGlide
{
public:
    KakkuStateGlide(Kakku*, al::ActorInitInfo const&, ExternalForceKeeper const*);
    appear();
    updateCameraTarget(float);
    kill();
    control();
    checkCollidedWall(bool) const;
    getStick(sead::Vector2<float>*) const;
    isEnableEndState() const;
    isEndByOnGround() const;
    tryCalcExternalVelocity(sead::Vector3<float>*) const;
    exeGlideStart();
    exeGlide();
    updatePoseByStick();
    updateVelocitySide();
    exeGlideJump();
    updatePoseSideByStick();
    exeGlideJumpEnd();
    ~KakkuStateGlide();
};
