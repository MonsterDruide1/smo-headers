#pragma once

class SkeletonDynamics
{
public:
    SkeletonDynamics(al::LiveActor*);
    setAttrCtrl(char const*);
    setAttrConstraint(char const*);
    setAttrNoCtrl(char const*);
    setAttrAuto(char const*, sead::Vector3<float> const&);
    setDelegate(sead::IDelegate1<SkeletonDynamicsCallbackInfo*>*);
    init();
    update();
    updateAnimPose();
    calcAnimPoseInvRot();
    updateAnimPoseLocal();
    updateSpring();
    invokeDelegate();
    updateConstrainedJoint();
    clearForceAndTorque();
    updateForceAndTorque();
    updatePosAndRot();
    clearLengthConstraint();
    updateLengthConstraint();
    applyLengthConstraint();
    updateAnimJoint();
    updateAutoJoint();
    applyModel();
};
